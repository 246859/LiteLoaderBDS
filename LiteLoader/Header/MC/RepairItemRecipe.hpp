// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Recipe.hpp"
#define EXTRA_INCLUDE_PART_REPAIRITEMRECIPE
#include "Extra/RepairItemRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART_REPAIRITEMRECIPE
class RepairItemRecipe : public Recipe {
#include "Extra/RepairItemRecipeAPI.hpp"
public:
    /*0*/ virtual ~RepairItemRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const& getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const& getResultItem() const;
    /*5*/ virtual bool isShapeless() const;
    /*6*/ virtual bool matches(class CraftingContainer&, class Level&) const;
    /*7*/ virtual int size() const;
    /*8*/ virtual class mce::UUID const& getId() const;
    /*9*/ virtual class ItemPack const& getItemPack() const;
    /*10*/ virtual bool isMultiRecipe() const;
    /*11*/ virtual void loadResultList(class BlockPalette const&) const;

    MCAPI static class mce::UUID ID;

protected:

private:
};