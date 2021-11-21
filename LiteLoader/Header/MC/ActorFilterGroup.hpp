// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterGroup.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorFilterGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorFilterGroup : public FilterGroup {
#include "Extra/ActorFilterGroupAPI.hpp"
public:
    virtual ~ActorFilterGroup();
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(int /*enum FilterGroup::CollectionType*/);
    virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);

public:
    MCAPI bool evaluateActor(class Actor const&, class VariantParameterList const&) const;
    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup const&);
    MCAPI ActorFilterGroup(class ActorFilterGroup&&);

    MCAPI static void initialize();


protected:
    MCAPI bool _addLegacyFilter(std::string const&, struct ActorFilterGroup::LegacyMapping const&, class FilterInput const&);
    MCAPI bool _processLegacyArray(std::string const&, class Json::Value const&, struct ActorFilterGroup::LegacyMapping const&);
    MCAPI bool _processLegacyMember(std::string const&, class Json::Value const&, struct ActorFilterGroup::LegacyMapping const&);
};