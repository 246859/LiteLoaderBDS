// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorInWaterTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorInWaterTest : public FilterTest {
#include "Extra/ActorInWaterTestAPI.hpp"
public:
    virtual ~ActorInWaterTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};