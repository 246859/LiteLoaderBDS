#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Main/LiteLoader.h>
#include <Utils/DbgHelper.h>
#include <LoggerAPI.h>
#include <I18nAPI.h>
#include <Psapi.h>
#include <string>

using namespace std;

string GetLastErrorMessage() {
    DWORD error_message_id = ::GetLastError();
    if (error_message_id == 0)
        return "";

    LPWSTR message_buffer = nullptr;
    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
                  nullptr, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR) &message_buffer, 0, nullptr);
    string res = wstr2str(wstring(message_buffer));
    LocalFree(message_buffer);
    return res;
}

//Tool
wchar_t *str2cwstr(const string &str) {
    auto len = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
    auto *buffer = new wchar_t[len + 1];
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buffer, len + 1);
    buffer[len] = L'\0';
    return buffer;
}

#define READ_BUFFER_SIZE 4096

bool NewProcess(const std::string &process, std::function<void(int, std::string)> callback, int timeLimit) {
    SECURITY_ATTRIBUTES sa;
    HANDLE hRead, hWrite;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.lpSecurityDescriptor = nullptr;
    sa.bInheritHandle = TRUE;

    if (!CreatePipe(&hRead, &hWrite, &sa, 0))
        return false;
    STARTUPINFOW si = {0};
    PROCESS_INFORMATION pi;

    si.cb = sizeof(STARTUPINFO);
    GetStartupInfoW(&si);
    si.hStdOutput = si.hStdError = hWrite;
    si.dwFlags = STARTF_USESTDHANDLES;

    auto wCmd = str2cwstr(process);
    if (!CreateProcessW(nullptr, wCmd, nullptr, nullptr, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        delete[] wCmd;
        return false;
    }
    CloseHandle(hWrite);
    CloseHandle(pi.hThread);

    std::thread([hRead{hRead}, hProcess{pi.hProcess},
                        callback{std::move(callback)}, timeLimit{timeLimit}, wCmd{wCmd}]() {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        if (timeLimit == -1)
            WaitForSingleObject(hProcess, INFINITE);
        else {
            WaitForSingleObject(hProcess, timeLimit);
            TerminateProcess(hProcess, -1);
        }
        char buffer[READ_BUFFER_SIZE];
        string strOutput;
        DWORD bytesRead, exitCode;

        delete[] wCmd;
        GetExitCodeProcess(hProcess, &exitCode);
        while (true) {
            ZeroMemory(buffer, READ_BUFFER_SIZE);
            if (!ReadFile(hRead, buffer, READ_BUFFER_SIZE, &bytesRead, nullptr))
                break;
            strOutput.append(buffer, bytesRead);
        }
        CloseHandle(hRead);
        CloseHandle(hProcess);

        try {
            if(callback)
                callback((int) exitCode, strOutput);
        }
        catch (const seh_exception &e) {
            logger.error("SEH Uncaught Exception Detected!\n{}", TextEncoding::toUTF8(e.what()));
            logger.error("In NewProcess callback");
            PrintCurrentStackTraceback();
        }
        catch (...) {
            logger.error("NewProcess Callback Failed!");
            logger.error("Uncaught Exception Detected!");
            PrintCurrentStackTraceback();
        }
    }).detach();

    return true;
}

std::pair<int,string> NewProcessSync(const std::string& process, int timeLimit, bool noReadOutput)
{
    SECURITY_ATTRIBUTES sa;
    HANDLE hRead, hWrite;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.lpSecurityDescriptor = nullptr;
    sa.bInheritHandle = TRUE;

    if (!CreatePipe(&hRead, &hWrite, &sa, 0))
        return { -1,"" };
    STARTUPINFOW si = { 0 };
    PROCESS_INFORMATION pi;

    si.cb = sizeof(STARTUPINFO);
    GetStartupInfoW(&si);
    si.hStdOutput = si.hStdError = hWrite;
    si.dwFlags = STARTF_USESTDHANDLES;

    auto wCmd = str2cwstr(process);
    if (!CreateProcessW(nullptr, wCmd, nullptr, nullptr, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        delete[] wCmd;
        return { -1,"" };
    }
    CloseHandle(hWrite);
    CloseHandle(pi.hThread);

    if (timeLimit == -1)
        WaitForSingleObject(pi.hProcess, INFINITE);
    else {
        WaitForSingleObject(pi.hProcess, timeLimit);
        TerminateProcess(pi.hProcess, -1);
    }
    char buffer[READ_BUFFER_SIZE];
    string strOutput;
    DWORD bytesRead, exitCode;

    delete[] wCmd;
    GetExitCodeProcess(pi.hProcess, &exitCode);
    if (!noReadOutput)
    {
        while (true) {
            ZeroMemory(buffer, READ_BUFFER_SIZE);
            if (!ReadFile(hRead, buffer, READ_BUFFER_SIZE, &bytesRead, nullptr))
                break;
            strOutput.append(buffer, bytesRead);
        }
    }
    CloseHandle(hRead);
    CloseHandle(pi.hProcess);
    return { exitCode, strOutput };
}

string GetModulePath(HMODULE handler) {
    wchar_t buf[MAX_PATH] = { 0 };
    GetModuleFileNameEx(GetCurrentProcess(), handler, buf, MAX_PATH);
    return wstr2str(wstring(buf));
}