// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SandFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SandFeature : public Feature {
#include "Extra/SandFeatureAPI.hpp"
public:
    virtual ~SandFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI SandFeature(class Block const&, int);
};