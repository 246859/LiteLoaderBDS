// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RuinedPortalPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RuinedPortalPiece : public StructurePiece {
#include "Extra/RuinedPortalPieceAPI.hpp"
public:
    virtual ~RuinedPortalPiece();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual int getWorldZ(int, int);


private:
    MCAPI void _addNetherrackDripColumn(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _maybeReplaceBlock(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _maybeReplaceFullStoneBlock(class Random&, class BlockSource&, class BlockPos, class Block const&);
    MCAPI void _maybeReplaceStairs(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _moveStructureBoundsToSuitableY(class Random&, class BlockSource&);
    MCAPI void _spreadNetherrack(class Random&, class BlockSource&);

    MCAPI static class Block const& _getRandomFacingStairs(class Random&, class Block const&);
    MCAPI static bool _willLavaFlowIn(class BlockSource&, class BlockPos);
};