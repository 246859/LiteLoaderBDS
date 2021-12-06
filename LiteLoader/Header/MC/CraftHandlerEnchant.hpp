// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERENCHANT
#include "Extra/CraftHandlerEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERENCHANT
class CraftHandlerEnchant : public CraftHandlerBase {
#include "Extra/CraftHandlerEnchantAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerEnchant();
    /*1*/ virtual int /*enum enum ItemStackNetResult*/ preHandleAction(int /*enum enum ItemStackRequestActionType*/);
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual int /*enum enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*5*/ virtual class Recipes const* _getLevelRecipes() const;


protected:

private:
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;
    MCAPI enum ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 10> const&);
};