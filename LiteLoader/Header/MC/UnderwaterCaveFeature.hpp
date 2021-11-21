// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CaveFeature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/UnderwaterCaveFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UnderwaterCaveFeature : public CaveFeature {
#include "Extra/UnderwaterCaveFeatureAPI.hpp"
public:
    virtual ~UnderwaterCaveFeature();
    virtual void unk_vfn_1();
    virtual bool carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&);
};