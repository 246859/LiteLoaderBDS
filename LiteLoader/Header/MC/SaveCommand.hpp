// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SAVECOMMAND
#include "Extra/SaveCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_SAVECOMMAND
class SaveCommand {
#include "Extra/SaveCommandAPI.hpp"
public:
    /*0*/ virtual ~SaveCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;
    MCAPI static class std::mutex mSaveAllMutex;
    MCAPI static enum SaveCommand::State mState;
    MCAPI static void saveHold(class CommandOutput&);
    MCAPI static void saveResume(class CommandOutput&);
    MCAPI static void saveState(class CommandOutput&);
};