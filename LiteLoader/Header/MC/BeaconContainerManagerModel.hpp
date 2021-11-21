// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/BeaconContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BeaconContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/BeaconContainerManagerModelAPI.hpp"
public:
    virtual ~BeaconContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::vector<class ItemStack> getItemCopies();
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int);
    virtual void setData(int, int);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI BeaconContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

    MCAPI static int const PAYMENT_SLOT;

private:
    MCAPI void _resetSelectionState();
};