// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/OutOfWorldSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OutOfWorldSystem : public ITickingSystem {
#include "Extra/OutOfWorldSystemAPI.hpp"
public:
    virtual ~OutOfWorldSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};