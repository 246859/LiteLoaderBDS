// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptObject.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBlockPistonComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBlockPistonComponent : public ScriptObject {
#include "Extra/ScriptBlockPistonComponentAPI.hpp"
public:
    virtual ~ScriptBlockPistonComponent();

public:
    MCAPI ScriptBlockPistonComponent(class ScriptBlockPistonComponent&&);
    MCAPI class Scripting::Result<std::vector<class BlockPos>> getAttachedBlocks();
    MCAPI class Scripting::Result<bool> isExpanded();
    MCAPI class Scripting::Result<bool> isExpanding();
    MCAPI class Scripting::Result<bool> isMoving();
    MCAPI class Scripting::Result<bool> isRetracted();
    MCAPI class Scripting::Result<bool> isRetracting();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockPistonComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockPistonComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};