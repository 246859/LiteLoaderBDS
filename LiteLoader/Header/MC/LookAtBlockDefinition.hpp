// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BehaviorDefinition.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_LOOKATBLOCKDEFINITION
#include "Extra/LookAtBlockDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKATBLOCKDEFINITION
class LookAtBlockDefinition : public BehaviorDefinition {
#include "Extra/LookAtBlockDefinitionAPI.hpp"
public:
    /*0*/ virtual ~LookAtBlockDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);


protected:

private:
};