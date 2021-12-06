// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_REALMSUNKNOWNPACKSOURCE
#include "Extra/RealmsUnknownPackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_REALMSUNKNOWNPACKSOURCE
class RealmsUnknownPackSource {
#include "Extra/RealmsUnknownPackSourceAPI.hpp"
public:
    /*0*/ virtual ~RealmsUnknownPackSource();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual int /*enum enum PackOrigin*/ getPackOrigin() const;
    /*4*/ virtual int /*enum enum PackType*/ getPackType() const;
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
    /*
    inline void forEachPack(class std::function<void (class Pack& )> a0){
        void (RealmsUnknownPackSource::*rv)(class std::function<void (class Pack& )>);
        *((void**)&rv) = dlsym("?forEachPack@RealmsUnknownPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack& )>>(a0));
    }
    inline void forEachPackConst(class std::function<void (class Pack const& )> a0) const{
        void (RealmsUnknownPackSource::*rv)(class std::function<void (class Pack const& )>) const;
        *((void**)&rv) = dlsym("?forEachPackConst@RealmsUnknownPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack const& )>>(a0));
    }
    */

protected:

private:
};