// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/TrailSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TrailSystem : public ITickingSystem {
#include "Extra/TrailSystemAPI.hpp"
public:
    virtual ~TrailSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);


private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class TrailComponent>&);
};