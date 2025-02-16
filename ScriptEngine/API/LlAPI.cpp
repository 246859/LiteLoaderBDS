#include "APIHelp.h"
#include "LlAPI.h"
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Utils/NetworkHelper.h>
#include <PluginManager.h>
#include <Tools/Utils.h>
#include <LiteLoader/Main/Version.h>
#include <string>
#include <filesystem>
#include <map>
using namespace std;


//////////////////// Classes ////////////////////

ClassDefine<void> LlClassBuilder =
    defineClass("ll")
        .function("version", &LlClass::version)
        .function("versionString", &LlClass::versionString)
        .function("requireVersion", &LlClass::requireVersion)
        .function("listPlugins", &LlClass::listPlugins)
        .function("import", &LlClass::importFunc)
        .function("export", &LlClass::exportFunc)
        .function("require", &LlClass::require)
        .function("eval", &LlClass::eval)
        .function("registerPlugin", &LlClass::registerPlugin)

        //For Compatibility
        .function("checkVersion", &LlClass::requireVersion)
        .build();


Local<Value> LlClass::registerPlugin(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString);
    //if (args.size() >= 3)
    //    CHECK_ARG_TYPE(args[2], ValueKind::kObject);
    if (args.size() >= 4)
        CHECK_ARG_TYPE(args[3], ValueKind::kObject);

    try {
        string name = args[0].toStr();
        string introduction = args.size() >= 2 ? args[1].toStr() : "";

        LL::Version ver = LL::Version(1, 0, 0);
        if (args.size() >= 3)
        {
            if (args[2].isArray())
            {
                Local<Array> verInfo = args[2].asArray();
                if (verInfo.size() >= 1)
                {
                    Local<Value> major = verInfo.get(0);
                    if (major.isNumber())
                        ver.major = major.toInt();
                }
                if (verInfo.size() >= 2)
                {
                    Local<Value> minor = verInfo.get(1);
                    if (minor.isNumber())
                        ver.minor = minor.toInt();
                }
                if (verInfo.size() >= 3)
                {
                    Local<Value> revision = verInfo.get(2);
                    if (revision.isNumber())
                        ver.revision = revision.toInt();
                }
            }
            else if (args[2].isObject())
            {
                Local<Object> verInfo = args[2].asObject();
                if (verInfo.has("major"))
                {
                    Local<Value> major = verInfo.get("major");
                    if (major.isNumber())
                        ver.major = major.toInt();
                }
                if (verInfo.has("minor"))
                {
                    Local<Value> minor = verInfo.get("minor");
                    if (minor.isNumber())
                        ver.minor = minor.toInt();
                }
                if (verInfo.has("revision"))
                {
                    Local<Value> revision = verInfo.get("revision");
                    if (revision.isNumber())
                        ver.revision = revision.toInt();
                }
            }
            else
            {
                logger.error("Wrong type of argument!");
                logger.error("In API: registerPlugin");
                return Boolean::newBoolean(false);
            }
        }

        map<string, string> other;
        if (args.size() >= 4)
        {
            Local<Object> otherInfo = args[3].asObject();
            auto keys = otherInfo.getKeyNames();
            for (auto& key : keys)
            {
                other[key] = otherInfo.get(key).toStr();
            }
        }

        ENGINE_OWN_DATA()->pluginName = ENGINE_OWN_DATA()->logger.title = name;
        return Boolean::newBoolean(PluginManager::registerPlugin(ENGINE_OWN_DATA()->pluginFilePath,
            name, introduction, ver, other));
    }
    CATCH("Fail in LLSERegisterPlugin!")
}

Local<Value> LlClass::version(const Arguments& args)
{
    try{
        Local<Object> ver = Object::newObject();
        ver.set("major", LITELOADER_VERSION_MAJOR);
        ver.set("minor", LITELOADER_VERSION_MINOR);
        ver.set("revision", LITELOADER_VERSION_REVISION);
        ver.set("isBeta", LITELOADER_VERSION_STATUS != LL::Version::Status::Release);
        return ver;
    }
    CATCH("Fail in LLSEGetVersion!")
}

Local<Value> LlClass::versionString(const Arguments& args)
{
    try
    {
        return String::newString(LL::getLoaderVersionString());
    }
    CATCH("Fail in LLSEGetVersionString!")
}

Local<Value> LlClass::requireVersion(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try {
        return Boolean::newBoolean(!IsVersionLess(LITELOADER_VERSION_MAJOR, LITELOADER_VERSION_MINOR, LITELOADER_VERSION_REVISION,
            args[0].toInt(), (args.size() >= 2) ? args[1].toInt() : 0, (args.size() >= 3) ? args[2].toInt() : 0));
    }
    CATCH("Fail in LLSERequireVersion!")
}

Local<Value> LlClass::listPlugins(const Arguments& args)
{
    try
    {
        Local<Array> plugins = Array::newArray();
        auto list = PluginManager::getAllPlugins();
        for(auto &plugin : list)
        {
            plugins.add(String::newString(plugin.second->name));
        }
        return plugins;
    }
    CATCH("Fail in LLSEListPlugins!")
}

Local<Value> LlClass::require(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString)

    try
    {
        bool existing = false;
        string require = args[0].toStr();
        string thisName = ENGINE_OWN_DATA()->pluginName;

        //已加载插件
        if (PluginManager::getPlugin(require) != nullptr)
        {
            logger.info(thisName + tr("llseapi.require.success") + require);
            return Boolean::newBoolean(true);
        }

        //插件目录
        existing = false;
        string requirePath = "";
        
        //Direct
        std::error_code ec;
        if (filesystem::exists(str2wstr(require), ec))
        {
            requirePath = require;
            existing = true;
        }
        else
        {
            auto list = GetFileNameList(LLSE_PLUGINS_LOAD_DIR);
            for (auto fileName : list)
            {
                if (fileName == require)
                {
                    requirePath = string(LLSE_PLUGINS_LOAD_DIR) + "/" + require;
                    existing = true;
                    break;
                }
            }
        }

        if (existing)
        { 
            bool success = PluginManager::loadPlugin(requirePath);
            if (success)
            {
                logger.info(thisName + tr("llseapi.require.success") + require);
                return Boolean::newBoolean(true);
            }
            else
            {
                logger.error(thisName + tr("llseapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        //依赖库目录
        existing = false;
        auto list = GetFileNameList(LLSE_DEPENDS_DIR);
        for (auto fileName : list)
        {
            if (fileName == require)
            {
                existing = true;
                break;
            }
        }
        if (existing)
        {
            bool success = PluginManager::loadPlugin(string(LLSE_DEPENDS_DIR) + "/" + require);
            if (success)
            {
                logger.info(thisName + tr("llseapi.require.success") + require);
                return Boolean::newBoolean(true);
            }
            else
            {
                logger.error(thisName + tr("llseapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        //HTTP(s)下载
        if (args.size() == 1)
        {
            logger.error(thisName + tr("llseapi.require.fail"));
            return Boolean::newBoolean(false);
        }

        string remotePath = args[1].toStr();
        int status;
        string result, downloadPath = string(LLSE_DEPENDS_DIR) + "/" + require;

        if (!HttpGetSync(remotePath, &status, &result) || status != 200)
        {
            logger.error(thisName + tr("llseapi.require.network.fail") + to_string(status));
            return Boolean::newBoolean(false);
        }
        WriteAllFile(downloadPath, result, false);

        logger.info(thisName + tr("llseapi.require.download.success") + downloadPath);

        //下载完毕安装
        bool success = PluginManager::loadPlugin(downloadPath);
        if (success)
        {
            logger.info(thisName + tr("llseapi.require.success") + require);
            return Boolean::newBoolean(true);
        }
        else
        {
            logger.error(thisName + tr("llseapi.require.fail"));
            return Boolean::newBoolean(false);
        }
    }
    CATCH("Fail in LLSERequire!")
}

Local<Value> LlClass::eval(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try
    {
        return EngineScope::currentEngine()->eval(args[0].toStr());
    }
    CATCH("Fail in LLSEEval!")
}
