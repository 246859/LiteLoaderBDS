// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MushroomBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSHROOMBLOCK
public:
    class MushroomBlock& operator=(class MushroomBlock const&) = delete;
    MushroomBlock(class MushroomBlock const&) = delete;
    MushroomBlock() = delete;
#endif

public:
    /*0*/ virtual ~MushroomBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
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
    /*84*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*144*/ virtual void __unk_vfn_144();
    /*161*/ virtual void __unk_vfn_161();
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*180*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*186*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*187*/ virtual enum BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*
    inline enum BlockRenderLayer getRenderLayer(class Block const& a0, class BlockSource& a1, class BlockPos const& a2) const{
        enum BlockRenderLayer (MushroomBlock::*rv)(class Block const&, class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getRenderLayer@MushroomBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline enum BlockRenderLayer getRenderLayer() const{
        enum BlockRenderLayer (MushroomBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getRenderLayer@MushroomBlock@@UEBA?AW4BlockRenderLayer@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MushroomBlock(std::string const&, int);

protected:

private:

};