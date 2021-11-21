// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RuinedPortalFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RuinedPortalFeature : public StructureFeature {
#include "Extra/RuinedPortalFeatureAPI.hpp"
public:
    virtual ~RuinedPortalFeature();
    virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, bool);
    virtual bool isFeatureChunk(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

public:
    MCAPI RuinedPortalFeature(unsigned int, bool);
};