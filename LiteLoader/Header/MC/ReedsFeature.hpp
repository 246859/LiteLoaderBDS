// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ReedsFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ReedsFeature : public Feature {
#include "Extra/ReedsFeatureAPI.hpp"
public:
    virtual ~ReedsFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};