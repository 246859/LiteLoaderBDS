// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockActor.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ChalkboardBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChalkboardBlockActor : public BlockActor {
#include "Extra/ChalkboardBlockActorAPI.hpp"
public:
    virtual ~ChalkboardBlockActor();
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool save(class CompoundTag&);
    virtual void saveBlockData(class CompoundTag&, class BlockSource&);
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void onCustomTagLoadDone(class BlockSource&);
    virtual void tick(class BlockSource&);
    virtual void onChanged(class BlockSource&);
    virtual void onPlace(class BlockSource&);
    virtual void unk_vfn_12();
    virtual void onRemoved(class BlockSource&);
    virtual void triggerEvent(int, int);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_21();
    virtual std::string getName();
    virtual std::string getImmersiveReaderText(class BlockSource&);
    virtual void unk_vfn_26();
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool _playerCanUpdate(class Player const&);

public:
    MCAPI ChalkboardBlockActor(class BlockPos const&);
    MCAPI enum ChalkboardSize const getChalkboardSize() const;
    MCAPI bool getLocked() const;
    MCAPI int getTextCharCount() const;
    MCAPI void setText(std::string const&);
    MCAPI void validate(class BlockSource&);

    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const&, enum ChalkboardSize, int);
    MCAPI static bool canCreateChalkboard(class Actor*, class BlockSource&, class BlockPos const&, enum ChalkboardSize, unsigned char, int, std::vector<class BlockPos>&, class ItemStack const&, bool);
    MCAPI static class ChalkboardBlockActor* convertFromEntity(class BlockSource&, class CompoundTag const&);
    MCAPI static class ChalkboardBlockActor* createChalkboard(class Actor*, class BlockSource&, class BlockPos const&, enum ChalkboardSize, unsigned char, int, bool, class ItemStack const&, std::string);
};