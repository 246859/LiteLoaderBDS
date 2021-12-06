// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_ACTORISTARGETTEST
#include "Extra/ActorIsTargetTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISTARGETTEST
class ActorIsTargetTest : public FilterTest {
#include "Extra/ActorIsTargetTestAPI.hpp"
public:
    /*0*/ virtual ~ActorIsTargetTest();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;


protected:

private:
};