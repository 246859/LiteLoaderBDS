// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_HEALTHATTRIBUTEDELEGATE
#include "Extra/HealthAttributeDelegateAPI.hpp"
#undef EXTRA_INCLUDE_PART_HEALTHATTRIBUTEDELEGATE
class HealthAttributeDelegate {
#include "Extra/HealthAttributeDelegateAPI.hpp"
public:
    /*0*/ virtual ~HealthAttributeDelegate();
    /*1*/ virtual void tick();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual bool change(float, float, struct AttributeBuffInfo);
    /*4*/ virtual float getBuffValue(class AttributeBuff const&) const;


protected:

private:
};