// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TRANSACTIONALWORLDBLOCKTARGET
#include "Extra/TransactionalWorldBlockTargetAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRANSACTIONALWORLDBLOCKTARGET
class TransactionalWorldBlockTarget {
#include "Extra/TransactionalWorldBlockTargetAPI.hpp"
public:
    /*0*/ virtual ~TransactionalWorldBlockTarget();
    /*1*/ virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual class Block const& getBlock(class BlockPos const&) const;
    /*4*/ virtual class Block const& getBlockNoBoundsCheck(class BlockPos const&) const;
    /*5*/ virtual class Block const& getExtraBlock(class BlockPos const&) const;
    /*6*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&) const;
    /*7*/ virtual bool setBlock(class BlockPos const&, class Block const&, int);
    /*8*/ virtual bool setBlockSimple(class BlockPos const&, class Block const&);
    /*9*/ virtual bool apply() const;
    /*10*/ virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);
    /*11*/ virtual bool mayPlace(class BlockPos const&, class Block const&) const;
    /*12*/ virtual bool canSurvive(class BlockPos const&, class Block const&) const;
    /*13*/ virtual short getMaxHeight() const;
    /*14*/ virtual short getMinHeight() const;
    /*15*/ virtual void __unk_vfn_1();
    /*16*/ virtual short getHeightmap(int, int);
    /*17*/ virtual bool isLegacyLevel();
    /*18*/ virtual class Biome const* getBiome(class BlockPos const&) const;
    /*19*/ virtual bool isInBounds(class Pos const&) const;
    /*20*/ virtual short getLocalWaterLevel(class BlockPos const&) const;
    /*21*/ virtual class LevelData const& getLevelData() const;
    /*22*/ virtual struct WorldGenContext const& getContext();


protected:

private:
};