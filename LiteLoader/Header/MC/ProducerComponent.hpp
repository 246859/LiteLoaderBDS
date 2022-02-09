// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ProducerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRODUCERCOMPONENT
public:
    class ProducerComponent& operator=(class ProducerComponent const&) = delete;
    ProducerComponent(class ProducerComponent const&) = delete;
#endif

public:
    /*0*/ virtual ~ProducerComponent();
    /*3*/ virtual void setStrength(int);
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool canStopPower() const;
    /*9*/ virtual void setStopPower(bool);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*14*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    MCAPI ProducerComponent();
    MCAPI void allowAttachments(bool);

protected:

private:

};