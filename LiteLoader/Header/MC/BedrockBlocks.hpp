// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BEDROCKBLOCKS
#include "Extra/BedrockBlocksAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEDROCKBLOCKS
namespace BedrockBlocks {
#include "Extra/BedrockBlocksAPI.hpp"
    MCAPI void assignBlocks();
    MCAPI extern class Block const* mAir;
    MCAPI extern class Block const* mClientRequestPlaceholderBlock;
    MCAPI extern class Block const* mUnknown;
    MCAPI void unassignBlocks();
};