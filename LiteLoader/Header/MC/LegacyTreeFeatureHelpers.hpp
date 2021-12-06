// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_LEGACYTREEFEATUREHELPERS
#include "Extra/LegacyTreeFeatureHelpersAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYTREEFEATUREHELPERS
namespace LegacyTreeFeatureHelpers {
#include "Extra/LegacyTreeFeatureHelpersAPI.hpp"
    MCAPI void _placeTrees(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, class WeakRefT<struct FeatureRefTraits>, class std::function<class WeakRefT<struct FeatureRefTraits> (class Random& )> const&);
    MCAPI void _setupForestCount(float, int&, class Random&);
};