// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERQUERYTEMPLATE
#include "Extra/ScriptBinderQueryTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERQUERYTEMPLATE
class ScriptBinderQueryTemplate {
#include "Extra/ScriptBinderQueryTemplateAPI.hpp"
public:
    /*0*/ virtual ~ScriptBinderQueryTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;

    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(enum entt::entity);

protected:

private:
};