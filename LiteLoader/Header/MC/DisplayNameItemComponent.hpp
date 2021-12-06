// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DISPLAYNAMEITEMCOMPONENT
#include "Extra/DisplayNameItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DISPLAYNAMEITEMCOMPONENT
class DisplayNameItemComponent {
#include "Extra/DisplayNameItemComponentAPI.hpp"
public:
    /*0*/ virtual ~DisplayNameItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:
};