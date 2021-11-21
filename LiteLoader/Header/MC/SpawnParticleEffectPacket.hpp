// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnParticleEffectPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnParticleEffectPacket : public Packet {
#include "Extra/SpawnParticleEffectPacketAPI.hpp"
public:
    virtual ~SpawnParticleEffectPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI SpawnParticleEffectPacket();
    MCAPI SpawnParticleEffectPacket(struct ActorUniqueID, class Vec3 const&, std::string const&, unsigned char);
    MCAPI SpawnParticleEffectPacket(class Vec3 const&, std::string const&, unsigned char);
};