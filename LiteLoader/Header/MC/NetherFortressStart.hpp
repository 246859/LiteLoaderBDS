// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureStart.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NetherFortressStartAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetherFortressStart : public StructureStart {
#include "Extra/NetherFortressStartAPI.hpp"
public:
    virtual ~NetherFortressStart();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();

public:
    MCAPI NetherFortressStart(class Random&, short, int, int);
};