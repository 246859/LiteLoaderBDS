// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_POINTEDDRIPSTONEFEATURE
#include "Extra/PointedDripstoneFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_POINTEDDRIPSTONEFEATURE
class PointedDripstoneFeature {
#include "Extra/PointedDripstoneFeatureAPI.hpp"
public:
    /*0*/ virtual ~PointedDripstoneFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;


protected:

private:
};