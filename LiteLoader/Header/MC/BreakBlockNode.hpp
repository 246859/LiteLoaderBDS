// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BREAKBLOCKNODE
#include "Extra/BreakBlockNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREAKBLOCKNODE
class BreakBlockNode {
#include "Extra/BreakBlockNodeAPI.hpp"
public:
    /*0*/ virtual ~BreakBlockNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);


protected:

private:
};