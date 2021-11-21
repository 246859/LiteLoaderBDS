// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Fish.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/PufferfishAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Pufferfish : public Fish {
#include "Extra/PufferfishAPI.hpp"
public:
    virtual ~Pufferfish();
    virtual bool isRuntimePredictedMovementEnabled();
    virtual void unk_vfn_22();
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void unk_vfn_41();
    virtual void normalTick();
    virtual float getRidingHeight();
    virtual bool startRiding(class Actor&);
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual float getCameraOffset();
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual void unk_vfn_94();
    virtual void unk_vfn_97();
    virtual bool isDamageBlocked(class ActorDamageSource const&);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*);
    virtual void adjustDamageAmount(int&);
    virtual void onTame();
    virtual void onFailedTame();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void unk_vfn_144();
    virtual void awardKillScore(class Actor&, int);
    virtual int /*enum ActorType*/ getEntityTypeId();
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual int getPortalWaitTime();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual struct ActorUniqueID getControllingPlayer();
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual void unk_vfn_197();
    virtual bool canSynchronizeNewEntity();
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual bool isWorldBuilder();
    virtual void unk_vfn_229();
    virtual bool isAdventure();
    virtual bool canDestroyBlock(class Block const&);
    virtual void setAuxValue(int);
    virtual void stopSpinAttack();
    virtual void unk_vfn_243();
    virtual void unk_vfn_246();
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    virtual void unk_vfn_258();
    virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    virtual void unk_vfn_266();
    virtual void _onSizeUpdated();
    virtual void unk_vfn_275();
    virtual void spawnAnim();
    virtual int getItemUseDuration();
    virtual float getItemUseStartupProgress();
    virtual float getItemUseIntervalProgress();
    virtual void unk_vfn_305();
    virtual bool isAlliedTo(class Mob*);
    virtual void unk_vfn_309();
    virtual void sendArmorDamage(class std::bitset<4> const&);
    virtual void onBorn(class Actor&, class Actor&);
    virtual void unk_vfn_338();
    virtual float _getWalkTargetValue(class BlockPos const&);
    virtual void unk_vfn_341();
    virtual void _serverAiMobStep();
    virtual void unk_vfn_357();

public:
    MCAPI Pufferfish(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
};