// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_VEXRANDOMMOVEGOAL
#include "Extra/VexRandomMoveGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_VEXRANDOMMOVEGOAL
class VexRandomMoveGoal {
#include "Extra/VexRandomMoveGoalAPI.hpp"
public:
    /*0*/ virtual ~VexRandomMoveGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;


protected:

private:
};