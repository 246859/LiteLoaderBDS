// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TickingAreaView {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREAVIEW
public:
    class TickingAreaView& operator=(class TickingAreaView const&) = delete;
    TickingAreaView(class TickingAreaView const&) = delete;
    TickingAreaView() = delete;
#endif

public:
    /*0*/ virtual ~TickingAreaView();
    /*1*/ virtual void init(struct Bounds const&, bool);
    /*2*/ virtual void tick(struct Tick const&, class BlockSource&, bool, bool);
    /*3*/ virtual void tickSeasons(class BlockSource&, class Random&);
    /*4*/ virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /*5*/ virtual struct Bounds const& getBounds() const;
    /*6*/ virtual bool isCircle() const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool checkInitialLoadDone(struct Tick);
    /*9*/ virtual bool checkLoadedChunkNeighborsDone(class BlockSource const&, bool) const;
    /*10*/ virtual void move(struct Bounds const&);
    /*11*/ virtual std::unique_ptr<class ChunkViewSource> createChildSource();
    /*12*/ virtual class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const&);
    /*
    inline bool isDoneLoading() const{
        bool (TickingAreaView::*rv)() const;
        *((void**)&rv) = dlsym("?isDoneLoading@TickingAreaView@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~TickingAreaView(){
         (TickingAreaView::*rv)();
        *((void**)&rv) = dlsym("??1TickingAreaView@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI TickingAreaView(class ChunkSource&);
    MCAPI void unregisterChunkBuildOrderPolicy(class ChunkBuildOrderPolicyBase&);

protected:

private:
    MCAPI bool _tickChunk(struct Tick const&, class BlockSource&, class Level&, class ChunkPos const&);

};