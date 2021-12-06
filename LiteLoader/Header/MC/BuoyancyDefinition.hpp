// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_BUOYANCYDEFINITION
#include "Extra/BuoyancyDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BUOYANCYDEFINITION
class BuoyancyDefinition {
#include "Extra/BuoyancyDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&, class BuoyancyComponent&) const;
    MCAPI void uninitialize(class EntityContext&, class BuoyancyComponent&) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition> >&);

protected:

private:
    MCAPI void _addLiquidBlockDescriptor(class BlockDescriptor const&);
    MCAPI class Json::Value _serialize() const;
};