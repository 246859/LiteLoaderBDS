// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "LootItemFunction.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_FILLCONTAINERFUNCTION
#include "Extra/FillContainerFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILLCONTAINERFUNCTION
class FillContainerFunction : public LootItemFunction {
#include "Extra/FillContainerFunctionAPI.hpp"
public:
    /*0*/ virtual ~FillContainerFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*2*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

protected:

private:
};