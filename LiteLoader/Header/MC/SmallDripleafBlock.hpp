// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SmallDripleafBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMALLDRIPLEAFBLOCK
public:
    class SmallDripleafBlock& operator=(class SmallDripleafBlock const&) = delete;
    SmallDripleafBlock(class SmallDripleafBlock const&) = delete;
    SmallDripleafBlock() = delete;
#endif

public:
    /*0*/ virtual ~SmallDripleafBlock();
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
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual bool canContainLiquid() const;
    /*68*/ virtual void __unk_vfn_68();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*79*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*81*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*85*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*93*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*96*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*144*/ virtual void __unk_vfn_144();
    /*149*/ virtual class BlockLegacy& init();
    /*161*/ virtual void __unk_vfn_161();
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*178*/ virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*
    inline bool waterSpreadCausesSpawn() const{
        bool (SmallDripleafBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@SmallDripleafBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeSilkTouched() const{
        bool (SmallDripleafBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@SmallDripleafBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isPreservingMediumWhenPlaced(class BlockLegacy const* a0) const{
        bool (SmallDripleafBlock::*rv)(class BlockLegacy const*) const;
        *((void**)&rv) = dlsym("?isPreservingMediumWhenPlaced@SmallDripleafBlock@@UEBA_NPEBVBlockLegacy@@@Z");
        return (this->*rv)(std::forward<class BlockLegacy const*>(a0));
    }
    */
    MCAPI SmallDripleafBlock(std::string const&, int);
    MCAPI static bool tryPlaceSmallDripleaf(class BlockSource&, class BlockPos const&, int, int);

protected:

private:
    MCAPI static void placeUpperBlock(class BlockSource&, class BlockPos const&, int);

};