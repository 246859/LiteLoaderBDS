// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/IcebergFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class IcebergFeature : public Feature {
#include "Extra/IcebergFeatureAPI.hpp"
public:
    virtual ~IcebergFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);


private:
    MCAPI void carve(int, int, class BlockPos const&, class BlockSource&, bool, float, class BlockPos const&, int, int) const;
    MCAPI void generateIcebergBlock(class BlockSource&, class Random&, class BlockPos const&, int, int, int, int, int, int, bool, bool, float, int, class Block const&) const;
    MCAPI int heightDependentRadiusRound(class Random&, int, int, int) const;
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const&, int, int, float) const;
};