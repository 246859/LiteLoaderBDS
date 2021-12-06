// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART_BASTIONFEATURE
#include "Extra/BastionFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASTIONFEATURE
class BastionFeature : public StructureFeature {
#include "Extra/BastionFeatureAPI.hpp"
public:
    /*0*/ virtual ~BastionFeature();
    /*1*/ virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    /*2*/ virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    /*3*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);


protected:

private:
};