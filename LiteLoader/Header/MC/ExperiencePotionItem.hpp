// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Item.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_EXPERIENCEPOTIONITEM
#include "Extra/ExperiencePotionItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPERIENCEPOTIONITEM
class ExperiencePotionItem : public Item {
#include "Extra/ExperiencePotionItemAPI.hpp"
public:
    /*0*/ virtual ~ExperiencePotionItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isArmor() const;
    /*8*/ virtual bool isBlockPlanterItem() const;
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual bool isDyeable() const;
    /*12*/ virtual bool isDye() const;
    /*13*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*14*/ virtual bool isFertilizer() const;
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual bool isThrowable() const;
    /*17*/ virtual bool isUseable() const;
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual int /*enum enum BlockShape*/ getBlockShape() const;
    /*21*/ virtual bool canDestroySpecial(class Block const&) const;
    /*22*/ virtual int getLevelDataForAuxValue(int) const;
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual int getAttackDamage() const;
    /*25*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*26*/ virtual void __unk_vfn_6();
    /*27*/ virtual int getPatternIndex() const;
    /*28*/ virtual void __unk_vfn_7();
    /*29*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*30*/ virtual bool canDestroyInCreative() const;
    /*31*/ virtual bool isDestructive(int) const;
    /*32*/ virtual bool isLiquidClipItem(int) const;
    /*33*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*34*/ virtual bool requiresInteract() const;
    /*35*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*36*/ virtual int getEnchantSlot() const;
    /*37*/ virtual int getEnchantValue() const;
    /*38*/ virtual int getArmorValue() const;
    /*39*/ virtual void __unk_vfn_8();
    /*40*/ virtual bool isValidAuxValue(int) const;
    /*41*/ virtual float getViewDamping() const;
    /*42*/ virtual void __unk_vfn_9();
    /*43*/ virtual void __unk_vfn_10();
    /*44*/ virtual void __unk_vfn_11();
    /*45*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*46*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*47*/ virtual void __unk_vfn_12();
    /*48*/ virtual void clearColor(class ItemStackBase&) const;
    /*49*/ virtual void clearColor(class CompoundTag*) const;
    /*50*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*51*/ virtual void __unk_vfn_13();
    /*52*/ virtual void __unk_vfn_14();
    /*53*/ virtual void __unk_vfn_15();
    /*54*/ virtual void __unk_vfn_16();
    /*55*/ virtual bool canUseOnSimTick() const;
    /*56*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*57*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*58*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*59*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*60*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*61*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*62*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual void __unk_vfn_17();
    /*64*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*65*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*66*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*67*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*68*/ virtual void __unk_vfn_18();
    /*69*/ virtual void __unk_vfn_19();
    /*70*/ virtual bool validFishInteraction(int) const;
    /*71*/ virtual std::string getInteractText(class Player const&) const;
    /*72*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*73*/ virtual int getIconYOffset() const;
    /*74*/ virtual bool canBeCharged() const;
    /*75*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*76*/ virtual void __unk_vfn_20();
    /*77*/ virtual std::string getAuxValuesDescription() const;
    /*78*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline bool isGlint(class ItemStackBase const& a0) const{
        bool (ExperiencePotionItem::*rv)(class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?isGlint@ExperiencePotionItem@@UEBA_NAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const&>(a0));
    }
    */

protected:

private:
};