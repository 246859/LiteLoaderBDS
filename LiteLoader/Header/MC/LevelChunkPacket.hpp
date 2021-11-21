// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LevelChunkPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LevelChunkPacket : public Packet {
#include "Extra/LevelChunkPacketAPI.hpp"
public:
    virtual ~LevelChunkPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI LevelChunkPacket();
    MCAPI LevelChunkPacket(class ChunkPos const&, bool);
    MCAPI void pushSubChunkMetadata(unsigned __int64);
};