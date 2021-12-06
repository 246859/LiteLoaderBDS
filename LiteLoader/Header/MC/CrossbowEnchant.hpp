// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_CROSSBOWENCHANT
#include "Extra/CrossbowEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_CROSSBOWENCHANT
class CrossbowEnchant {
#include "Extra/CrossbowEnchantAPI.hpp"
public:
    /*0*/ virtual ~CrossbowEnchant();
    /*1*/ virtual bool isCompatibleWith(int /*enum enum Enchant::Type*/) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual void __unk_vfn_5();
    /*11*/ virtual void __unk_vfn_6();
    /*12*/ virtual void __unk_vfn_7();
    /*13*/ virtual void __unk_vfn_8();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(int /*enum enum Enchant::Type*/) const;


protected:

private:
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;
};