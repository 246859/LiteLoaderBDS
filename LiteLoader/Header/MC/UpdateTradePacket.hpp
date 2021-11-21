// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/UpdateTradePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UpdateTradePacket : public Packet {
#include "Extra/UpdateTradePacketAPI.hpp"
public:
    virtual ~UpdateTradePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI UpdateTradePacket();
    MCAPI UpdateTradePacket(enum ContainerID, enum ContainerType, int, std::string const&, class CompoundTag&&, struct ActorUniqueID const&, struct ActorUniqueID const&, int, bool, bool);
};