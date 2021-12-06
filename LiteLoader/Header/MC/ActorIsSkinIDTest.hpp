// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_ACTORISSKINIDTEST
#include "Extra/ActorIsSkinIDTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISSKINIDTEST
class ActorIsSkinIDTest : public FilterTest {
#include "Extra/ActorIsSkinIDTestAPI.hpp"
public:
    /*0*/ virtual ~ActorIsSkinIDTest();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*4*/ virtual class Json::Value _serializeValue() const;


protected:

private:
};