// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECIRCUITCOMPONENT
public:
    class BaseCircuitComponent& operator=(class BaseCircuitComponent const&) = delete;
    BaseCircuitComponent(class BaseCircuitComponent const&) = delete;
#endif

public:
    /*0*/ virtual ~BaseCircuitComponent();
    /*1*/ virtual int getStrength() const;
    /*2*/ virtual int getDirection() const;
    /*3*/ virtual void setStrength(int);
    /*4*/ virtual void setDirection(unsigned char);
    /*5*/ virtual void setConsumePowerAnyDirection(bool);
    /*6*/ virtual bool canConsumePowerAnyDirection() const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool canStopPower() const;
    /*9*/ virtual void setStopPower(bool);
    /*10*/ virtual bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /*11*/ virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*13*/ virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /*14*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*15*/ virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual bool hasSource(class BaseCircuitComponent&);
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*23*/ virtual enum CircuitComponentType getCircuitComponentGroupType() const;
    /*
    inline bool isHalfPulse() const{
        bool (BaseCircuitComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isHalfPulse@BaseCircuitComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSecondaryPowered() const{
        bool (BaseCircuitComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isSecondaryPowered@BaseCircuitComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool allowIndirect() const{
        bool (BaseCircuitComponent::*rv)() const;
        *((void**)&rv) = dlsym("?allowIndirect@BaseCircuitComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canConsumerPower() const{
        bool (BaseCircuitComponent::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@BaseCircuitComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasChildrenSource() const{
        bool (BaseCircuitComponent::*rv)() const;
        *((void**)&rv) = dlsym("?hasChildrenSource@BaseCircuitComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~BaseCircuitComponent(){
         (BaseCircuitComponent::*rv)();
        *((void**)&rv) = dlsym("??1BaseCircuitComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BaseCircuitComponent();

protected:
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const&, int, bool, int);

private:

};