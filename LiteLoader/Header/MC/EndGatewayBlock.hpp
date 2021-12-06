// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ActorBlock.hpp"
#define EXTRA_INCLUDE_PART_ENDGATEWAYBLOCK
#include "Extra/EndGatewayBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDGATEWAYBLOCK
class EndGatewayBlock : public ActorBlock {
#include "Extra/EndGatewayBlockAPI.hpp"
public:
    /*0*/ virtual ~EndGatewayBlock();
    /*1*/ virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const&, class Block const&) const;
    /*2*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*3*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*7*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*8*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*9*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*10*/ virtual void __unk_vfn_0();
    /*11*/ virtual bool isStrippable(class Block const&) const;
    /*12*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*13*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*14*/ virtual void __unk_vfn_1();
    /*15*/ virtual void __unk_vfn_2();
    /*16*/ virtual void __unk_vfn_3();
    /*17*/ virtual bool isWaterBlocking() const;
    /*18*/ virtual void __unk_vfn_4();
    /*19*/ virtual void __unk_vfn_5();
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual void __unk_vfn_7();
    /*22*/ virtual void __unk_vfn_8();
    /*23*/ virtual void __unk_vfn_9();
    /*24*/ virtual void __unk_vfn_10();
    /*25*/ virtual bool isDoubleSlabBlock() const;
    /*26*/ virtual void __unk_vfn_11();
    /*27*/ virtual void __unk_vfn_12();
    /*28*/ virtual void __unk_vfn_13();
    /*29*/ virtual void __unk_vfn_14();
    /*30*/ virtual void __unk_vfn_15();
    /*31*/ virtual void __unk_vfn_16();
    /*32*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*33*/ virtual bool isValidAuxValue(int) const;
    /*34*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*35*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*36*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void __unk_vfn_17();
    /*38*/ virtual void __unk_vfn_18();
    /*39*/ virtual bool canContainLiquid() const;
    /*40*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*41*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*42*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*43*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*44*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*45*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*46*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*47*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*48*/ virtual void __unk_vfn_19();
    /*49*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void __unk_vfn_20();
    /*55*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*56*/ virtual void __unk_vfn_21();
    /*57*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*58*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*59*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*60*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*61*/ virtual bool mayPick() const;
    /*62*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*63*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*64*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*65*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*66*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*67*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*68*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*69*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*70*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*71*/ virtual void __unk_vfn_22();
    /*72*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*73*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*74*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*75*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*76*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*77*/ virtual int getExperienceDrop(class Random&) const;
    /*78*/ virtual void __unk_vfn_23();
    /*79*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*80*/ virtual void __unk_vfn_24();
    /*81*/ virtual void __unk_vfn_25();
    /*82*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*83*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*84*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual void __unk_vfn_26();
    /*86*/ virtual int getIconYOffset() const;
    /*87*/ virtual bool isAuxValueRelevantForPicking() const;
    /*88*/ virtual int getColor(class Block const&) const;
    /*89*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*90*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*92*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*93*/ virtual void __unk_vfn_27();
    /*94*/ virtual class Block const& getRenderBlock() const;
    /*95*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*96*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
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
    /*110*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*111*/ virtual void __unk_vfn_31();
    /*112*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*113*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual int getExtraRenderLayers() const;
    /*115*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*116*/ virtual void __unk_vfn_32();
    /*117*/ virtual void __unk_vfn_33();
    /*
    inline bool waterSpreadCausesSpawn() const{
        bool (EndGatewayBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@EndGatewayBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};