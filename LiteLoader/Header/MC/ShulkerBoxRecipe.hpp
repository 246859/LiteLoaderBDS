// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ShapelessRecipe.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ShulkerBoxRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShulkerBoxRecipe : public ShapelessRecipe {
#include "Extra/ShulkerBoxRecipeAPI.hpp"
public:
    virtual ~ShulkerBoxRecipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual bool itemsMatch(class ItemDescriptor const&, int, int, class CompoundTag const*);
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&);
    virtual void unk_vfn_15();

public:
    MCAPI static class mce::UUID const ID;
};