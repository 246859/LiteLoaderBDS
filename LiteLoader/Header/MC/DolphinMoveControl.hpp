// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveControl.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/DolphinMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DolphinMoveControl : public MoveControl {
#include "Extra/DolphinMoveControlAPI.hpp"
public:
    virtual ~DolphinMoveControl();
    virtual void tick(class MoveControlComponent&, class Mob&);

public:
    MCAPI DolphinMoveControl();


private:
    MCAPI float _calcRotX(float, float, float);
    MCAPI float _calcRotY(float, float);
    MCAPI bool _clearOfObstacles(class Mob const&, float, float, int) const;
    MCAPI bool _isInWater(class Mob const&) const;
    MCAPI void _setupBreach(class Mob&);
};