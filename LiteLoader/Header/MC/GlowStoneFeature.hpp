// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_GLOWSTONEFEATURE
#include "Extra/GlowStoneFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_GLOWSTONEFEATURE
class GlowStoneFeature : public Feature {
#include "Extra/GlowStoneFeatureAPI.hpp"
public:
    /*0*/ virtual ~GlowStoneFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;


protected:

private:
};