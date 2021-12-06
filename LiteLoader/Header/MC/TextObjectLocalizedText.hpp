// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXT
#include "Extra/TextObjectLocalizedTextAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXT
class TextObjectLocalizedText {
#include "Extra/TextObjectLocalizedTextAPI.hpp"
public:
    /*0*/ virtual ~TextObjectLocalizedText();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const&) const;


protected:

private:
};