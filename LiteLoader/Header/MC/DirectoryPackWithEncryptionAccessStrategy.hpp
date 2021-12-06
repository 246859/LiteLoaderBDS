// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "PackAccessStrategy.hpp"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
#include "Extra/DirectoryPackWithEncryptionAccessStrategyAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {
#include "Extra/DirectoryPackWithEncryptionAccessStrategyAPI.hpp"
public:
    /*0*/ virtual ~DirectoryPackWithEncryptionAccessStrategy();
    /*1*/ virtual unsigned __int64 getPackSize() const;
    /*2*/ virtual class ResourceLocation const& getPackLocation() const;
    /*3*/ virtual std::string const& getPackName() const;
    /*4*/ virtual bool isWritable() const;
    /*5*/ virtual void setIsTrusted(bool);
    /*6*/ virtual bool isTrusted() const;
    /*7*/ virtual bool hasAsset(class Core::Path const&, bool) const;
    /*8*/ virtual bool hasFolder(class Core::Path const&) const;
    /*9*/ virtual bool getAsset(class Core::Path const&, std::string&, bool) const;
    /*10*/ virtual bool deleteAsset(class Core::PathBuffer<std::string > const&);
    /*11*/ virtual bool writeAsset(class Core::Path const&, std::string const&);
    /*12*/ virtual void forEachIn(class Core::Path const&, class std::function<void (class Core::Path const& )>, bool) const;
    /*13*/ virtual void forEachInAssetSet(class Core::Path const&, class std::function<void (class Core::Path const& )>) const;
    /*14*/ virtual int /*enum enum PackAccessStrategyType*/ getStrategyType() const;
    /*15*/ virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const;
    /*16*/ virtual int /*enum enum PackAccessAssetGenerationResult*/ generateAssetSet();
    /*17*/ virtual bool canRecurse() const;
    /*18*/ virtual void unload();
    /*19*/ virtual bool hasUpgradeFiles() const;
    /*20*/ virtual class ContentIdentity readContentIdentity() const;


protected:

private:
    MCAPI bool _hasUnencryptedAsset(class Core::Path const&) const;
};