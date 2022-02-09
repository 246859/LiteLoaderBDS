// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DaylightDetectorBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAYLIGHTDETECTORBLOCK
public:
    class DaylightDetectorBlock& operator=(class DaylightDetectorBlock const&) = delete;
    DaylightDetectorBlock(class DaylightDetectorBlock const&) = delete;
    DaylightDetectorBlock() = delete;
#endif

public:
    /*0*/ virtual ~DaylightDetectorBlock();
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
    /*57*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*62*/ virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /*68*/ virtual void __unk_vfn_68();
    /*72*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*96*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*143*/ virtual int getVariant(class Block const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*161*/ virtual void __unk_vfn_161();
    /*162*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*170*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*198*/ virtual void updateShape(class BlockSource&, class BlockPos const&);
    /*199*/ virtual void updateSignalStrength(class BlockSource&, class BlockPos const&) const;
    /*
    inline bool isSignalSource() const{
        bool (DaylightDetectorBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@DaylightDetectorBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (DaylightDetectorBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@DaylightDetectorBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI DaylightDetectorBlock(std::string const&, int, bool);

protected:

private:

};