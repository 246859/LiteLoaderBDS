// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PORTALFORCER
#include "Extra/PortalForcerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PORTALFORCER
class PortalForcer {
#include "Extra/PortalForcerAPI.hpp"
public:
    /*0*/ virtual ~PortalForcer();
    /*1*/ virtual void deserialize(class CompoundTag const&);
    /*2*/ virtual void serialize(class CompoundTag&) const;

    MCAPI class PortalRecord const& addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const&);
    MCAPI class PortalRecord const& addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord);
    MCAPI class PortalRecord const& createPortal(class Actor const&, int);
    MCAPI bool findPortal(class AutomaticID<class Dimension, int>, class BlockPos const&, int, class BlockPos&) const;
    MCAPI void force(class Actor&);
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const&) const;
    MCAPI void removeMisalignedPortalRecords(class BlockSource&, class PortalShape const&, class PortalRecord const&);
    MCAPI void removePortalRecord(class BlockSource&, class BlockPos const&);
    MCAPI void travelPortal(class Actor&, class BlockPos const&, class AutomaticID<class Dimension, int>) const;
    MCAPI static std::string const PORTAL_FILE_ID;

protected:

private:
};