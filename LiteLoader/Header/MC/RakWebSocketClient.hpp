// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RakWebSocket.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RakWebSocketClientAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RakWebSocketClient : public RakWebSocket {
#include "Extra/RakWebSocketClientAPI.hpp"
public:
    virtual ~RakWebSocketClient();
    virtual void _updateState();
    virtual unsigned int _genMaskingKey();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
};