// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartRideable : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTRIDEABLE
public:
    class MinecartRideable& operator=(class MinecartRideable const&) = delete;
    MinecartRideable(class MinecartRideable const&) = delete;
    MinecartRideable() = delete;
#endif

public:
    /*14*/ virtual ~MinecartRideable();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*228*/ virtual void __unk_vfn_228();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*276*/ virtual void __unk_vfn_276();
    /*278*/ virtual void __unk_vfn_278();
    /*
    inline enum MinecartType getType(){
        enum MinecartType (MinecartRideable::*rv)();
        *((void**)&rv) = dlsym("?getType@MinecartRideable@@UEAA?AW4MinecartType@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MinecartRideable(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:

};