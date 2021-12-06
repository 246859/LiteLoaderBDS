// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_INMEMORYENV
#include "Extra/InMemoryEnvAPI.hpp"
#undef EXTRA_INCLUDE_PART_INMEMORYENV
class InMemoryEnv {
#include "Extra/InMemoryEnvAPI.hpp"
public:
    /*0*/ virtual ~InMemoryEnv();
    /*1*/ virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile* *);
    /*2*/ virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile* *);
    /*3*/ virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile* *);
    /*4*/ virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile* *);
    /*5*/ virtual bool FileExists(std::string const&);
    /*6*/ virtual class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
    /*7*/ virtual class leveldb::Status DeleteFileA(std::string const&);
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual class leveldb::Status RenameFile(std::string const&, std::string const&);
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual void __unk_vfn_8();
    /*18*/ virtual void __unk_vfn_9();
    /*19*/ virtual void __unk_vfn_10();
    /*20*/ virtual void flushToPermanentStorage();


protected:

private:
    MCAPI void _flushWithTransaction();
};