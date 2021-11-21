// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NetworkChunkPublisherUpdatePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetworkChunkPublisherUpdatePacket : public Packet {
#include "Extra/NetworkChunkPublisherUpdatePacketAPI.hpp"
public:
    virtual ~NetworkChunkPublisherUpdatePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI NetworkChunkPublisherUpdatePacket();
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const&, unsigned int);
};