// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ExplodeSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ExplodeSystem : public ITickingSystem {
#include "Extra/ExplodeSystemAPI.hpp"
public:
    virtual ~ExplodeSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};