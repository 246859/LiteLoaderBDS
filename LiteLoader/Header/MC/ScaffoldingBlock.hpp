// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScaffoldingBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGBLOCK
public:
    class ScaffoldingBlock& operator=(class ScaffoldingBlock const&) = delete;
    ScaffoldingBlock(class ScaffoldingBlock const&) = delete;
    ScaffoldingBlock() = delete;
#endif

public:
    /*0*/ virtual ~ScaffoldingBlock();
    /*5*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*10*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual bool isWaterBlocking() const;
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*46*/ virtual void __unk_vfn_46();
    /*48*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual bool canContainLiquid() const;
    /*62*/ virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /*68*/ virtual void __unk_vfn_68();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*85*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*89*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*93*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*125*/ virtual bool canSlide(class BlockSource&, class BlockPos const&) const;
    /*128*/ virtual void __unk_vfn_128();
    /*144*/ virtual void __unk_vfn_144();
    /*148*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*161*/ virtual void __unk_vfn_161();
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*183*/ virtual class HitResult clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*197*/ virtual class mce::Color getDustColor(class Block const&) const;
    /*198*/ virtual std::string getDustParticleName(class Block const&) const;
    /*199*/ virtual void __unk_vfn_199();
    /*
    inline bool waterSpreadCausesSpawn() const{
        bool (ScaffoldingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@ScaffoldingBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ScaffoldingBlock(std::string const&, int);
    MCAPI static int const MAX_STABILITY;

protected:
    MCAPI int calculateStability(class BlockSource const&, class BlockPos const&) const;

private:
    MCAPI bool _updateBlockStability(class BlockSource&, class BlockPos const&) const;

};