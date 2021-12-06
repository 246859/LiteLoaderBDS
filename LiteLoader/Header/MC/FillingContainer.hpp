// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Container.hpp"
#define EXTRA_INCLUDE_PART_FILLINGCONTAINER
#include "Extra/FillingContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILLINGCONTAINER
class FillingContainer : public Container {
#include "Extra/FillingContainerAPI.hpp"
public:
    /*0*/ virtual ~FillingContainer();
    /*1*/ virtual void init();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const& )>);
    /*3*/ virtual class ItemStack const& getItem(int) const;
    /*4*/ virtual void setItem(int, class ItemStack const&);
    /*5*/ virtual void setItemWithForceBalance(int, class ItemStack const&, bool);
    /*6*/ virtual void removeItem(int, int);
    /*7*/ virtual int getContainerSize() const;
    /*8*/ virtual int getMaxStackSize() const;
    /*9*/ virtual void startOpen(class Player&);
    /*10*/ virtual void stopOpen(class Player&);
    /*11*/ virtual void __unk_vfn_0();
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual bool add(class ItemStack&);
    /*15*/ virtual bool canAdd(class ItemStack const&) const;
    /*16*/ virtual void clearSlot(int);
    /*17*/ virtual int clearInventory(int);
    /*18*/ virtual void load(class ListTag const&, class SemVersion const&, class Level&);
    /*19*/ virtual int getEmptySlotsCount() const;

    MCAPI int getHotbarSize() const;
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const;
    MCAPI bool hasResource(int);
    MCAPI int removeResource(class ItemStack const&, bool, bool, int);
    MCAPI bool removeResource(int);
    MCAPI std::unique_ptr<class ListTag> save();
    MCAPI void swapSlots(int, int);

protected:
    MCAPI int _addResource(class ItemStack const&);
    MCAPI void _doDrop(class ItemStack&, bool);
    MCAPI void _fixBackwardCompabilityItem(class ItemStack&);
    MCAPI int _getEmptySlotsCount(int, int) const;
    MCAPI int _getFreeSlot() const;
    MCAPI int _getSlot(int) const;
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const&) const;
    MCAPI bool _isCreative() const;
    MCAPI void _release(int);

private:
};