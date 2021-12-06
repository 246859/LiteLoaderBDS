// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_LOOKATDEFINITION
#include "Extra/LookAtDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKATDEFINITION
class LookAtDefinition {
#include "Extra/LookAtDefinitionAPI.hpp"
public:
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class LookAtComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition> >&);

protected:

private:
};