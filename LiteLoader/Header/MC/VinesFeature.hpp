// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_VINESFEATURE
#include "Extra/VinesFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_VINESFEATURE
class VinesFeature : public Feature {
#include "Extra/VinesFeatureAPI.hpp"
public:
    /*0*/ virtual ~VinesFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;


protected:

private:
};