// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_LOOTITEMCONDITION
#include "Extra/LootItemConditionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEMCONDITION
class LootItemCondition {
#include "Extra/LootItemConditionAPI.hpp"
public:
    /*0*/ virtual ~LootItemCondition();

    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

protected:

private:
};