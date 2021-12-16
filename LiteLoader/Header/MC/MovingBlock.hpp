// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MovingBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVINGBLOCK
public:
    class MovingBlock& operator=(class MovingBlock const&) = delete;
    MovingBlock(class MovingBlock const&) = delete;
    MovingBlock() = delete;
#endif

public:
    /*0*/ virtual ~MovingBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*3*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual bool isStrippable(class Block const&) const;
    /*11*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*12*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*13*/ virtual void __unk_vfn_1();
    /*14*/ virtual void __unk_vfn_2();
    /*15*/ virtual void __unk_vfn_3();
    /*16*/ virtual void __unk_vfn_4();
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual void __unk_vfn_6();
    /*19*/ virtual void __unk_vfn_7();
    /*20*/ virtual void __unk_vfn_8();
    /*21*/ virtual void __unk_vfn_9();
    /*22*/ virtual void __unk_vfn_10();
    /*23*/ virtual bool isDoubleSlabBlock() const;
    /*24*/ virtual void __unk_vfn_11();
    /*25*/ virtual void __unk_vfn_12();
    /*26*/ virtual void __unk_vfn_13();
    /*27*/ virtual void __unk_vfn_14();
    /*28*/ virtual void __unk_vfn_15();
    /*29*/ virtual void __unk_vfn_16();
    /*30*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*31*/ virtual bool isValidAuxValue(int) const;
    /*32*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_17();
    /*36*/ virtual void __unk_vfn_18();
    /*37*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*40*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*41*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_19();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void updateEntityAfterFallOn(class BlockPos const&, struct IActorMovementProxy&) const;
    /*52*/ virtual void __unk_vfn_20();
    /*53*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*54*/ virtual void __unk_vfn_21();
    /*55*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*56*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*57*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*58*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*59*/ virtual bool mayPick() const;
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*61*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*62*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*65*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*66*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*69*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*70*/ virtual void __unk_vfn_22();
    /*71*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*72*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*73*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*74*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*75*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*76*/ virtual int getExperienceDrop(class Random&) const;
    /*77*/ virtual void __unk_vfn_23();
    /*78*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*79*/ virtual void __unk_vfn_24();
    /*80*/ virtual void __unk_vfn_25();
    /*81*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*82*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*83*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*84*/ virtual void __unk_vfn_26();
    /*85*/ virtual int getIconYOffset() const;
    /*86*/ virtual bool isAuxValueRelevantForPicking() const;
    /*87*/ virtual int getColor(class Block const&) const;
    /*88*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*89*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*92*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*93*/ virtual void __unk_vfn_27();
    /*94*/ virtual class Block const& getRenderBlock() const;
    /*95*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*96*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*97*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*98*/ virtual void __unk_vfn_28();
    /*99*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*100*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*101*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*102*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*103*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*104*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*105*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*107*/ virtual void __unk_vfn_29();
    /*108*/ virtual void __unk_vfn_30();
    /*109*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*110*/ virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;
    /*111*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*112*/ virtual void __unk_vfn_31();
    /*113*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*114*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual int getExtraRenderLayers() const;
    /*116*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*117*/ virtual void __unk_vfn_32();
    /*118*/ virtual void __unk_vfn_33();
    /*
    inline bool pushesUpFallingBlocks() const{
        bool (MovingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?pushesUpFallingBlocks@MovingBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI MovingBlock(std::string const&, int);

protected:

private:

};