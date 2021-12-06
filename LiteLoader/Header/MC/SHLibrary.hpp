// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_SHLIBRARY
#include "Extra/SHLibraryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHLIBRARY
class SHLibrary : public StructurePiece {
#include "Extra/SHLibraryAPI.hpp"
public:
    /*0*/ virtual ~SHLibrary();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);

protected:

private:
};