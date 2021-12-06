// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_FILTERTEST
#include "Extra/FilterTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTEST
class FilterTest {
#include "Extra/FilterTestAPI.hpp"
public:
    /*0*/ virtual ~FilterTest();
    /*1*/ virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /*2*/ virtual bool evaluate(struct FilterContext const&) const = 0;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const = 0;
    /*5*/ virtual class Json::Value _serializeDomain() const;
    /*6*/ virtual class Json::Value _serializeValue() const = 0;

    MCAPI class Json::Value serialize() const;

protected:
    MCAPI bool _testValuesWithOperator(int, int) const;
    MCAPI bool _testValuesWithOperator(float, float) const;
    MCAPI bool _testValuesWithOperator(bool, bool) const;

private:
};