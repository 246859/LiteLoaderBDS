// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_REPLACEITEMCOMMAND
#include "Extra/ReplaceItemCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_REPLACEITEMCOMMAND
class ReplaceItemCommand {
#include "Extra/ReplaceItemCommandAPI.hpp"
public:
    /*0*/ virtual ~ReplaceItemCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};