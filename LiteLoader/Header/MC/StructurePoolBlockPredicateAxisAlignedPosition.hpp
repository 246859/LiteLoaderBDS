// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
#include "Extra/StructurePoolBlockPredicateAxisAlignedPositionAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
class StructurePoolBlockPredicateAxisAlignedPosition {
#include "Extra/StructurePoolBlockPredicateAxisAlignedPositionAPI.hpp"
public:
    /*0*/ virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    /*1*/ virtual bool test(class Block const&, class Randomize&) const;
    /*2*/ virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;


protected:

private:
};