// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChemistryTableBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYTABLEBLOCK
public:
    class ChemistryTableBlock& operator=(class ChemistryTableBlock const&) = delete;
    ChemistryTableBlock(class ChemistryTableBlock const&) = delete;
    ChemistryTableBlock() = delete;
#endif

public:
    /*0*/ virtual ~ChemistryTableBlock();
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
    /*49*/ virtual bool isValidAuxValue(int) const;
    /*52*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*59*/ virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;
    /*68*/ virtual void __unk_vfn_68();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*130*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*131*/ virtual bool isAuxValueRelevantForPicking() const;
    /*143*/ virtual int getVariant(class Block const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*146*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*161*/ virtual void __unk_vfn_161();
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
    /*197*/ virtual class ItemInstance getEntityResourceItem(class Randomize&, class BlockActor const&, int) const;
    /*
    inline bool canBeSilkTouched() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@ChemistryTableBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@ChemistryTableBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCraftingBlock() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isCraftingBlock@ChemistryTableBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ChemistryTableBlock(std::string const&, int);
    MCAPI static class ItemInstance getItemForType(enum ChemistryTableType, int);
    MCAPI static bool isUIValidForPlayer(class BlockPos const&, class Player&, float, enum ChemistryTableType);

protected:

private:

};