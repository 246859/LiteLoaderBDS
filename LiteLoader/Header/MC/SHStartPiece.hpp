// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SHStairsDown.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SHStartPiece : public SHStairsDown {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTARTPIECE
public:
    class SHStartPiece& operator=(class SHStartPiece const&) = delete;
    SHStartPiece(class SHStartPiece const&) = delete;
    SHStartPiece() = delete;
#endif

public:
    /*0*/ virtual ~SHStartPiece();
    /*3*/ virtual enum StructurePieceType getType() const;

protected:

private:

};