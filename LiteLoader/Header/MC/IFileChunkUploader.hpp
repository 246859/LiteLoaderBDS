// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IFileChunkUploader {

#define AFTER_EXTRA
// Add Member There
public:
enum UploadStreamResult;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILECHUNKUPLOADER
public:
    class IFileChunkUploader& operator=(class IFileChunkUploader const&) = delete;
    IFileChunkUploader(class IFileChunkUploader const&) = delete;
#endif

public:
    /*0*/ virtual ~IFileChunkUploader();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void (bool)>) = 0;
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void (std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void (bool)>);
    /*6*/ virtual void uploadStream(struct FileInfo const&, unsigned __int64, std::string const&, class std::function<void (enum IFileChunkUploader::UploadStreamResult)>);
    /*7*/ virtual void __unk_vfn_7() = 0;
    /*8*/ virtual void __unk_vfn_8() = 0;
    /*9*/ virtual void __unk_vfn_9() = 0;
    /*10*/ virtual void __unk_vfn_10() = 0;
    /*11*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
    /*
    inline void confirmChunkReceived(struct FileInfo const& a0, struct FileChunkInfo const& a1){
        void (IFileChunkUploader::*rv)(struct FileInfo const&, struct FileChunkInfo const&);
        *((void**)&rv) = dlsym("?confirmChunkReceived@IFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0), std::forward<struct FileChunkInfo const&>(a1));
    }
    inline void update(){
        void (IFileChunkUploader::*rv)();
        *((void**)&rv) = dlsym("?update@IFileChunkUploader@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~IFileChunkUploader(){
         (IFileChunkUploader::*rv)();
        *((void**)&rv) = dlsym("??1IFileChunkUploader@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI IFileChunkUploader();

protected:

private:

};