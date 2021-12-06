// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Animal.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_AXOLOTL
#include "Extra/AxolotlAPI.hpp"
#undef EXTRA_INCLUDE_PART_AXOLOTL
class Axolotl : public Animal {
#include "Extra/AxolotlAPI.hpp"
public:
    /*0*/ virtual void initializeComponents(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Axolotl();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual float getRidingHeight();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual float getCameraOffset() const;
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void playerTouch(class Player&);
    /*13*/ virtual void __unk_vfn_6();
    /*14*/ virtual void __unk_vfn_7();
    /*15*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*16*/ virtual void __unk_vfn_8();
    /*17*/ virtual void __unk_vfn_9();
    /*18*/ virtual void __unk_vfn_10();
    /*19*/ virtual void __unk_vfn_11();
    /*20*/ virtual class Actor* findAttackTarget();
    /*21*/ virtual bool isValidTarget(class Actor*) const;
    /*22*/ virtual void adjustDamageAmount(int&) const;
    /*23*/ virtual void onTame();
    /*24*/ virtual void onFailedTame();
    /*25*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*26*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*27*/ virtual float getPickRadius();
    /*28*/ virtual void awardKillScore(class Actor&, int);
    /*29*/ virtual class HashedString const& queryEntityRenderer() const;
    /*30*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*31*/ virtual int getPortalWaitTime() const;
    /*32*/ virtual bool canChangeDimensions() const;
    /*33*/ virtual void __unk_vfn_12();
    /*34*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*35*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*36*/ virtual bool canBePulledIntoVehicle() const;
    /*37*/ virtual void __unk_vfn_13();
    /*38*/ virtual bool canSynchronizeNewEntity() const;
    /*39*/ virtual void __unk_vfn_14();
    /*40*/ virtual void __unk_vfn_15();
    /*41*/ virtual bool isWorldBuilder() const;
    /*42*/ virtual void __unk_vfn_16();
    /*43*/ virtual bool isAdventure() const;
    /*44*/ virtual bool canDestroyBlock(class Block const&) const;
    /*45*/ virtual void setAuxValue(int);
    /*46*/ virtual void stopSpinAttack();
    /*47*/ virtual void __unk_vfn_17();
    /*48*/ virtual void __unk_vfn_18();
    /*49*/ virtual void __unk_vfn_19();
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual void __unk_vfn_21();
    /*52*/ virtual void spawnAnim();
    /*53*/ virtual int getItemUseDuration() const;
    /*54*/ virtual float getItemUseStartupProgress() const;
    /*55*/ virtual float getItemUseIntervalProgress() const;
    /*56*/ virtual void __unk_vfn_22();
    /*57*/ virtual bool isAlliedTo(class Mob*);
    /*58*/ virtual void __unk_vfn_23();
    /*59*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*60*/ virtual void onBorn(class Actor&, class Actor&);
    /*61*/ virtual int getAttackTime();
    /*62*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*63*/ virtual void __unk_vfn_24();
    /*64*/ virtual void _serverAiMobStep();
    /*65*/ virtual void __unk_vfn_25();
    /*66*/ virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const&, class Vec3 const&) const;
    /*
    inline float _getWalkTargetValue(class BlockPos const& a0){
        float (Axolotl::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?_getWalkTargetValue@Axolotl@@UEAAMAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    */

protected:

private:
};