// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FLYNODE
#include "Extra/FlyNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLYNODE
class FlyNode {
#include "Extra/FlyNodeAPI.hpp"
public:
    /*0*/ virtual ~FlyNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);


protected:

private:
};