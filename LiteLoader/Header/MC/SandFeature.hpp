// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_SANDFEATURE
#include "Extra/SandFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SANDFEATURE
class SandFeature : public Feature {
#include "Extra/SandFeatureAPI.hpp"
public:
    /*0*/ virtual ~SandFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;


protected:

private:
};