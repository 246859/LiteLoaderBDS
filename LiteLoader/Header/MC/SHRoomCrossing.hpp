// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_SHROOMCROSSING
#include "Extra/SHRoomCrossingAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHROOMCROSSING
class SHRoomCrossing : public StructurePiece {
#include "Extra/SHRoomCrossingAPI.hpp"
public:
    /*0*/ virtual ~SHRoomCrossing();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;


protected:

private:
};