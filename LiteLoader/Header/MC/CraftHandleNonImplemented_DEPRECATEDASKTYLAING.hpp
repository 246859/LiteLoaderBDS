// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/CraftHandleNonImplemented_DEPRECATEDASKTYLAINGAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public CraftHandlerBase {
#include "Extra/CraftHandleNonImplemented_DEPRECATEDASKTYLAINGAPI.hpp"
public:
    virtual ~CraftHandleNonImplemented_DEPRECATEDASKTYLAING();
    virtual void unk_vfn_2();
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    virtual void _postCraftRequest(bool);
};