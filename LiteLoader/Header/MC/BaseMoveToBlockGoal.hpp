// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_BASEMOVETOBLOCKGOAL
#include "Extra/BaseMoveToBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASEMOVETOBLOCKGOAL
class BaseMoveToBlockGoal : public BaseMoveToGoal {
#include "Extra/BaseMoveToBlockGoalAPI.hpp"
public:
    /*0*/ virtual ~BaseMoveToBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void appendDebugInfo(std::string&) const = 0;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&) = 0;
    /*8*/ virtual void _moveToBlock();
    /*9*/ virtual unsigned __int64 _getRepathTime() const;
    /*10*/ virtual bool findTargetBlock();


protected:

private:
};