// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CommandOrigin.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_BLOCKCOMMANDORIGIN
#include "Extra/BlockCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKCOMMANDORIGIN
class BlockCommandOrigin : public CommandOrigin {
#include "Extra/BlockCommandOriginAPI.hpp"
public:
    /*0*/ virtual ~BlockCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class Level* getLevel() const;
    /*6*/ virtual class Dimension* getDimension() const;
    /*7*/ virtual class Actor* getEntity() const;
    /*8*/ virtual int /*enum enum CommandPermissionLevel*/ getPermissionsLevel() const;
    /*9*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*10*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*11*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*12*/ virtual bool canUseAbility(int /*enum enum AbilitiesIndex*/) const;
    /*13*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*14*/ virtual bool isSelectorExpansionAllowed() const;
    /*15*/ virtual unsigned char getSourceSubId() const;
    /*16*/ virtual class CommandOrigin const& getOutputReceiver() const;
    /*17*/ virtual int /*enum enum CommandOriginType*/ getOriginType() const;
    /*18*/ virtual class mce::UUID const& getUUID() const;
    /*19*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*20*/ virtual class CompoundTag serialize() const;
    /*21*/ virtual bool isValid() const;
    /*22*/ virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource&) const;
    /*23*/ virtual class CommandBlockActor* _getBlockEntity(class BlockSource&) const;

    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const&, class Level&);

protected:
    MCAPI std::string _getName(class BlockSource&) const;

private:
};