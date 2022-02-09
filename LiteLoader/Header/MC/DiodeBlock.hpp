// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DiodeBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIODEBLOCK
public:
    class DiodeBlock& operator=(class DiodeBlock const&) = delete;
    DiodeBlock(class DiodeBlock const&) = delete;
    DiodeBlock() = delete;
#endif

public:
    /*0*/ virtual ~DiodeBlock();
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
    /*53*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*66*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*68*/ virtual void __unk_vfn_68();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*85*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*93*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*143*/ virtual int getVariant(class Block const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*161*/ virtual void __unk_vfn_161();
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
    /*197*/ virtual int getSignal(class BlockSource&, class BlockPos const&, int) const;
    /*198*/ virtual bool isLocked(class BlockSource&, class BlockPos const&) const;
    /*199*/ virtual bool isSameDiode(class Block const&) const;
    /*200*/ virtual bool shouldPrioritize(class BlockSource&, class BlockPos const&) const;
    /*201*/ virtual bool isOn() const;
    /*202*/ virtual bool shouldTurnOn(class BlockSource&, class BlockPos const&) const;
    /*203*/ virtual int getInputSignal(class BlockSource&, class BlockPos const&) const;
    /*204*/ virtual bool isAlternateInput(class Block const&) const;
    /*205*/ virtual int getAlternateSignal(class BlockSource&, class BlockPos const&) const;
    /*206*/ virtual int getOutputSignal(class Block const&) const;
    /*207*/ virtual int getTurnOffDelay(class Block const&) const;
    /*208*/ virtual int getTurnOnDelay(class Block const&) const = 0;
    /*209*/ virtual class Block const* getOnBlock(class Block const*) const = 0;
    /*210*/ virtual class Block const* getOffBlock(class Block const*) const = 0;
    /*
    inline bool canSpawnOn() const{
        bool (DiodeBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canSpawnOn@DiodeBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSignalSource() const{
        bool (DiodeBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@DiodeBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~DiodeBlock(){
         (DiodeBlock::*rv)();
        *((void**)&rv) = dlsym("??1DiodeBlock@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI DiodeBlock(std::string const&, int, bool);
    MCAPI static bool isDiode(class Block const&);

protected:
    MCAPI int getAlternateSignalAt(class BlockSource&, class BlockPos const&, int) const;

private:

};