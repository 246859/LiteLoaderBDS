// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_SEAPICKLEFEATURE
#include "Extra/SeaPickleFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEAPICKLEFEATURE
class SeaPickleFeature : public Feature {
#include "Extra/SeaPickleFeatureAPI.hpp"
public:
    /*0*/ virtual ~SeaPickleFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;


protected:

private:
};