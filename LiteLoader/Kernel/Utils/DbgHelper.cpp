#include <Utils/DbgHelper.h>
#include <windows.h>
#include <dbghelp/dbghelp.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <Main/Config.h>
#include <thread>
#include <string>
#include <map>
#include <LoggerAPI.h>
using namespace std;
extern Logger logger;

#define DBGHELP_TRANSLATE_TCHAR

/////////////////////////////////// Symbol Loader ///////////////////////////////////

std::set<std::wstring> loadedSymbolDir;
bool symbolsLoaded = false;

void FindSymbols(wstring& collection, const string& nowPath, bool recursion = false)
{
	filesystem::directory_iterator list(nowPath);
	for (auto& it : list)
	{
		if (it.is_directory() && recursion)
		{
			FindSymbols(collection, it.path().string(), recursion);
		}
		else if (it.path().extension() == ".pdb")
		{
			filesystem::path dir = filesystem::canonical(it.path());
			wstring dirPath = dir.remove_filename().native();

			if (loadedSymbolDir.find(dirPath) == loadedSymbolDir.end())
			{
				collection = collection + L";" + dirPath.substr(0, dirPath.size() - 1);
				loadedSymbolDir.insert(dirPath);
			}
		}
	}
}

bool LoadSymbols()
{
	if (symbolsLoaded)
		return true;

	loadedSymbolDir.clear();
	wstring symbolPath{ L"srv*C:\\Windows\\symbols*http://msdl.microsoft.com/download/symbols" };
	FindSymbols(symbolPath, ".", false);
	FindSymbols(symbolPath, ".\\plugins", true);

	if (!SymInitializeW(GetCurrentProcess(), symbolPath.c_str(), TRUE))
	{
		logger.warn("Fail to load Symbol Files! Error Code: {}", GetLastError());
		return false;
	}
	loadedSymbolDir.clear();
	symbolsLoaded = true;
	return true;
}

bool CleanupSymbols()
{
	symbolsLoaded = false;
	return SymCleanup(GetCurrentProcess());
}


/////////////////////////////////// Symbol Reader ///////////////////////////////////

std::map<DWORD, std::wstring> moduleMap;

PSYMBOL_INFOW GetSymbolInfo(HANDLE hProcess, void* address)
{
	PSYMBOL_INFOW pSymbol = (SYMBOL_INFOW*) new char[sizeof(SYMBOL_INFOW) + MAX_SYM_NAME * sizeof(TCHAR)];
	pSymbol->SizeOfStruct = sizeof(SYMBOL_INFOW);
	pSymbol->MaxNameLen = MAX_SYM_NAME;

	DWORD64 displacement = 0;
	if (SymFromAddrW(hProcess, (DWORD64)address, &displacement, pSymbol))
		return pSymbol;
	else
		return NULL;
}

void CleanSymbolInfo(PSYMBOL_INFOW pSymbol)
{
	delete[]((char*)pSymbol);
}

BOOL CALLBACK EnumerateModuleCallBack(PCTSTR ModuleName, DWORD64 ModuleBase, ULONG ModuleSize, PVOID UserContext)
{
	std::map<DWORD, std::wstring>* pModuleMap = (std::map<DWORD, std::wstring>*)UserContext;
	LPCWSTR name = wcsrchr(ModuleName, TEXT('\\')) + 1;
	(*pModuleMap)[(DWORD)ModuleBase] = name;

	return TRUE;
}

bool CreateModuleMap(HANDLE hProcess)
{
	if (!EnumerateLoadedModulesW64(hProcess, EnumerateModuleCallBack, &moduleMap))
	{
		logger.error("Fail to Enumerate loaded modules! Error Code: {}", GetLastError());
		return false;
	}
	return true;
}

wstring MapModuleFromAddr(HANDLE hProcess, void* address)
{
	return moduleMap[(DWORD)SymGetModuleBase64(hProcess, (DWORD64)address)];
}

/////////////////////////////////// Print Traceback ///////////////////////////////////

#define MACHINE_TYPE IMAGE_FILE_MACHINE_AMD64

bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e, Logger* l)
{
    Logger& debugLogger = l ? *l : logger;
	if (!LL::globalConfig.enableErrorStackTraceback)
	{
        logger.error("* Stack traceback is disabled by config file.");
		return true;
	}

	HANDLE hProcess = GetCurrentProcess();
	HANDLE hThread = GetCurrentThread();
	DWORD threadId = GetCurrentThreadId();
	bool cacheSymbol = LL::globalConfig.cacheErrorStackTracebackSymbol;
	bool res = false;

	std::thread printThread([e,hProcess,hThread,threadId,cacheSymbol,&res,&debugLogger]()
	{
		// Set global SEH-Exception handler
		_set_se_translator(seh_exception::TranslateSEHtoCE);

		LoadSymbols();
		CreateModuleMap(hProcess);

		PCONTEXT pContext;
		CONTEXT context;
		if (e)
			pContext = e->ContextRecord;
		else
		{
			HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, TRUE, threadId);
			if (hThread == NULL)
			{
                logger.error("Fail to Open Thread! Error Code: {}", GetLastError());
				return;
			}
			context.ContextFlags = CONTEXT_FULL;
			if (!GetThreadContext(hThread, &context))
			{
                logger.error("Fail to Get Context! Error Code: {}", GetLastError());
				return;
			}
			pContext = &context;
		}

		STACKFRAME64 stackFrame = { 0 };
		stackFrame.AddrPC.Mode = AddrModeFlat;
		stackFrame.AddrPC.Offset = pContext->Rip;
		stackFrame.AddrStack.Mode = AddrModeFlat;
		stackFrame.AddrStack.Offset = pContext->Rsp;
		stackFrame.AddrFrame.Mode = AddrModeFlat;
		stackFrame.AddrFrame.Offset = pContext->Rbp;

		bool skipingPrintFunctionsStack = true;

		while (StackWalk64(MACHINE_TYPE, hProcess, hThread, &stackFrame, pContext,
			NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL))
		{
			DWORD64 address = stackFrame.AddrPC.Offset;

			//Function
			PSYMBOL_INFOW info;
			if (info = GetSymbolInfo(hProcess, (void*)stackFrame.AddrPC.Offset))
			{
				if (skipingPrintFunctionsStack)
				{
					if (wcscmp(info->Name,	L"PrintCurrentStackTraceback") == 0)		//Skiping these print functions' stack
						skipingPrintFunctionsStack = false;
					continue;
				}

				char addrHex[10] = "";
				snprintf(addrHex, sizeof(addrHex), "0x%llX", info->Address);

				debugLogger.error("at {} ({})  [{}]",
					wstr2str(info->Name), addrHex, wstr2str(MapModuleFromAddr(hProcess, (void*)address).c_str()));

				//Line
				DWORD displacement = 0;
				IMAGEHLP_LINEW64 line;
				line.SizeOfStruct = sizeof(IMAGEHLP_LINEW64);

				if (SymGetLineFromAddrW64(hProcess, address, &displacement, &line))
                    debugLogger.error("(in File {} : Line {})", wstr2str(line.FileName), line.LineNumber);
			}
			else
                debugLogger.error("at ???????? (0x????????)");
		}
		cout << endl;

		if(!cacheSymbol)
			CleanupSymbols();
		res = true;
	});

	printThread.join();
	return res;
}