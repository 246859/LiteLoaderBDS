// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CLEARSPAWNPOINTCOMMAND
#include "Extra/ClearSpawnPointCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLEARSPAWNPOINTCOMMAND
class ClearSpawnPointCommand {
#include "Extra/ClearSpawnPointCommandAPI.hpp"
public:
    /*0*/ virtual ~ClearSpawnPointCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};