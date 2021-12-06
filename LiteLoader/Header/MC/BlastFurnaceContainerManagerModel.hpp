// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FurnaceContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_BLASTFURNACECONTAINERMANAGERMODEL
#include "Extra/BlastFurnaceContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLASTFURNACECONTAINERMANAGERMODEL
class BlastFurnaceContainerManagerModel : public FurnaceContainerManagerModel {
#include "Extra/BlastFurnaceContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~BlastFurnaceContainerManagerModel();
    /*1*/ virtual int /*enum enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum enum ContainerID*/);
    /*3*/ virtual int /*enum enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum enum ContainerType*/);


protected:

private:
};