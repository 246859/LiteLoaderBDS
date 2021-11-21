// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LegacySmallMushroomsFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LegacySmallMushroomsFeature : public Feature {
#include "Extra/LegacySmallMushroomsFeatureAPI.hpp"
public:
    virtual ~LegacySmallMushroomsFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI LegacySmallMushroomsFeature(class FeatureRegistry const&);
};