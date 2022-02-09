// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FakeBatteryMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKEBATTERYMONITORINTERFACE
public:
    class FakeBatteryMonitorInterface& operator=(class FakeBatteryMonitorInterface const&) = delete;
    FakeBatteryMonitorInterface(class FakeBatteryMonitorInterface const&) = delete;
#endif

public:
    /*0*/ virtual ~FakeBatteryMonitorInterface();
    /*
    inline enum BatteryStatus getBatteryStatus() const{
        enum BatteryStatus (FakeBatteryMonitorInterface::*rv)() const;
        *((void**)&rv) = dlsym("?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ");
        return (this->*rv)();
    }
    inline float getBatteryLevel() const{
        float (FakeBatteryMonitorInterface::*rv)() const;
        *((void**)&rv) = dlsym("?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ");
        return (this->*rv)();
    }
    */
    MCAPI FakeBatteryMonitorInterface();

protected:

private:

};