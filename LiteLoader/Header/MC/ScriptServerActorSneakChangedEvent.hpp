// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSNEAKCHANGEDEVENT
#include "Extra/ScriptServerActorSneakChangedEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSNEAKCHANGEDEVENT
class ScriptServerActorSneakChangedEvent {
#include "Extra/ScriptServerActorSneakChangedEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorSneakChangedEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setIsSneaking(bool);

protected:

private:
    MCAPI static class HashedString const mHash;
};