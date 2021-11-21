// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToBlockGoal.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MoveToLandGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MoveToLandGoal : public BaseMoveToBlockGoal {
#include "Extra/MoveToLandGoalAPI.hpp"
public:
    virtual ~MoveToLandGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    virtual void _moveToBlock();
    virtual void unk_vfn_16();

public:
    MCAPI MoveToLandGoal(class Mob&, float, int, int, int, float);
};