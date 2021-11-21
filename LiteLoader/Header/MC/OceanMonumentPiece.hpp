// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/OceanMonumentPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OceanMonumentPiece : public StructurePiece {
#include "Extra/OceanMonumentPieceAPI.hpp"
public:
    virtual ~OceanMonumentPiece();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual int getWorldX(int, int);
    virtual int getWorldZ(int, int);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual void addHardcodedSpawnAreas(class LevelChunk&);


protected:
    MCAPI OceanMonumentPiece(int, int&, class std::shared_ptr<class RoomDefinition>, int, int, int);
    MCAPI bool chunkIntersects(class BoundingBox const&, int, int, int, int);
    MCAPI void generateDefaultFloor(class BlockSource&, class BoundingBox const&, int, int, bool);
    MCAPI void spawnElder(class BlockSource&, class BoundingBox const&, int, int, int);

    MCAPI static int mGridroomLeftWingConnectIndex;
    MCAPI static int mGridroomRightWingConnectIndex;
    MCAPI static int mGridroomSourceIndex;
    MCAPI static int mGridroomTopConnectIndex;
    MCAPI static int const mLeftWingIndex;
    MCAPI static int const mPenthouseIndex;
    MCAPI static int const mRightWingIndex;
};