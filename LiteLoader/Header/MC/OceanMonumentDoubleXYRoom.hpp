// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "OceanMonumentPiece.hpp"
#define EXTRA_INCLUDE_PART_OCEANMONUMENTDOUBLEXYROOM
#include "Extra/OceanMonumentDoubleXYRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANMONUMENTDOUBLEXYROOM
class OceanMonumentDoubleXYRoom : public OceanMonumentPiece {
#include "Extra/OceanMonumentDoubleXYRoomAPI.hpp"
public:
    /*0*/ virtual ~OceanMonumentDoubleXYRoom();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);


protected:

private:
};