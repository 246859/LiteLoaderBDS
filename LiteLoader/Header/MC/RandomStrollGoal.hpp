// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RANDOMSTROLLGOAL
#include "Extra/RandomStrollGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMSTROLLGOAL
class RandomStrollGoal {
#include "Extra/RandomStrollGoalAPI.hpp"
public:
    /*0*/ virtual ~RandomStrollGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual bool _setWantedPosition();


protected:

private:
};