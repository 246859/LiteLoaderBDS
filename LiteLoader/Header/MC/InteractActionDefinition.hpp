// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/InteractActionDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InteractActionDefinition : public BehaviorDefinition {
#include "Extra/InteractActionDefinitionAPI.hpp"
public:
    virtual ~InteractActionDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};