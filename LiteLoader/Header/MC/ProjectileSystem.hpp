// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ProjectileSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ProjectileSystem : public ITickingSystem {
#include "Extra/ProjectileSystemAPI.hpp"
public:
    virtual ~ProjectileSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};