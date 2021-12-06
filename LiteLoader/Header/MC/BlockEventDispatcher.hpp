// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BLOCKEVENTDISPATCHER
#include "Extra/BlockEventDispatcherAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKEVENTDISPATCHER
class BlockEventDispatcher {
#include "Extra/BlockEventDispatcherAPI.hpp"
public:
    MCAPI void dispatchEvent(class BlockPos const&, unsigned int, class Block const&, class Block const&);
    MCAPI class BlockEventDispatcherToken registerListener(class Vec3 const&, float, class std::function<void (class BlockPos const& , unsigned int, class Block const& )>);
    MCAPI void removeListener(int);
    MCAPI void updatePosition(int, class Vec3 const&);

protected:

private:
};