// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_LOOTTABLEENTRY
#include "Extra/LootTableEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTTABLEENTRY
class LootTableEntry {
#include "Extra/LootTableEntryAPI.hpp"
public:
    /*0*/ virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    /*1*/ virtual ~LootTableEntry();


protected:

private:
};