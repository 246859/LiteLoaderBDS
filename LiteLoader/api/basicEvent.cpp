#include <api/basicEvent.h>
#include <api/LiteloaderApi.h>
#include <lbpch.h>
#include <LoaderApi.h>
#include <mc/OffsetHelper.h>
#ifdef EZMC
#include <ezmc/Command/Command.h>
#include <ezmc/Command/CommandOrigin.h>
#include <ezmc/Actor/Player.h>
#include <ezmc/Actor/Mob.h>
#include <ezmc/Math/BlockPos.h>
#else
#include <mc/Command.h>
#include <mc/Player.h>
#include <mc/mass.h>
#endif
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <seh_exception.hpp>

class ServerPlayer;
class NetworkIdentifier;
using std::vector;
extern Logger<stdio_commit> LOG;

// Call Event
template <typename T, typename T1>
void CallEvent(vector<T> &vec, T1 &ev) {
    for (size_t count = 0; count < vec.size(); count++) {
        vec[count](ev);
    }
}

// Call Event 
// Return false to cancel event
template <typename T, typename T1>
bool CallEventEx(vector<T> &vec, T1 &ev) {
    bool pass_to_bds = true;
    for (size_t count = 0; count < vec.size(); count++) {
        if (!vec[count](ev))
            pass_to_bds = false;
    }
    return pass_to_bds;
}


/////////////////// PlayerJoin ///////////////////
std::unordered_map<string, string> langs;
#include <ezmc/Core/ConnectionRequest.h>
vector<function<void(JoinEV)>> Join_call_backs;
LIAPI void Event::addEventListener(function<void(JoinEV)> callback) {
    Join_call_backs.push_back(callback);
}
THook(void,"?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
      "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void *ServerNetworkHandler_this, NetworkIdentifier *Ni, ConnectionRequest * a3, ServerPlayer *sp)
{
    try {
        string ip         = liteloader::getIP(*Ni);
        xuid_t xuid       = offPlayer::getXUID(sp);
        JoinEV join_event = {sp, ip, xuid};
        auto   map1       = a3->rawToken->dataInfo.value_.map_;
        for (auto iter = map1->begin(); iter != map1->end(); ++iter) {
            string s(iter->first.c_str());
            if (s.find("LanguageCode") != s.npos) {
                auto langcode                     = iter->second.value_.string_;
                langs[offPlayer::getRealName(sp)] = langcode;
            }
        }
        CallEvent(Join_call_backs, join_event);
        return original(ServerNetworkHandler_this, Ni, a3, sp);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at JoinEV");
    }
}

/////////////////// PlayerLeft ///////////////////

class DisconnectPacket;
class ServerNetworkHandler;
vector<function<void(LeftEV)>> Left_call_backs;
LIAPI void Event::addEventListener(function<void(LeftEV)> callback) {
    Left_call_backs.push_back(callback);
}
THook(void,"?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler *_this, ServerPlayer *sp, bool a3)
{
    try {
        xuid_t xuid       = offPlayer::getXUID(sp);
        LeftEV left_event = {sp, xuid};
        auto   iterss     = langs.find(offPlayer::getRealName(sp));
        if (iterss != langs.end())
            iterss = langs.erase(iterss);
        CallEvent(Left_call_backs, left_event);
        return original(_this, sp, a3);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at LeftEV");
    }
}


/////////////////// PlayerChat ///////////////////

vector<function<bool(ChatEV)>> Chat_call_backs;
LIAPI void Event::addEventListener(function<bool(ChatEV)> callback) {
    Chat_call_backs.push_back(callback);
}
/*
THook(void,
      "_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEAUChatEvent@@@Z",
      void *snh,
      ServerPlayer *sp,
      string *msg) {
    ChatEV ChatEV    = {sp, *msg};
    bool isCancelled = false;
    for (size_t count = 0; count < Chat_call_backs.size(); count++) {
        if (!Chat_call_backs[count](ChatEV))
            isCancelled = true;
    }
    if (!isCancelled) {
        original(snh, sp, msg);
    }
}*/
THook(void,"?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      void *self, NetworkIdentifier *id, void *text)
{
    try {
        auto   sp         = SymCall("?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@E@Z",
                          Player*, void*, void*, char)(self, id, *(char*)((uintptr_t)text + 16));
        auto   msg        = std::string(*(std::string*)((uintptr_t)text + 88));
        ChatEV chat_event = {sp, msg};
        if (!CallEventEx(Chat_call_backs, chat_event))
            return;
        return original(self, id, text);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at ChatEV");
    }
}


/////////////////// PlayerChangeDim ///////////////////

class ChangeDimensionRequest;
class Level;
vector<function<void(ChangeDimEV)>> Change_dim_call_backs;
LIAPI void Event::addEventListener(function<void(ChangeDimEV)> callback) {
    Change_dim_call_backs.push_back(callback);
}
THook(bool,"?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level *_this, Player *_this_sp, ChangeDimensionRequest *cdimreq)
{
    try {
        ChangeDimEV change_dim_event;
        change_dim_event.Player = _this_sp;
        bool ret                = original(_this, _this_sp, cdimreq);

        CallEvent(Change_dim_call_backs, change_dim_event);
        return ret;
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at ChatEV");
    }
}


/////////////////// PlayerUseCmd ///////////////////

Player *MakeSP(CommandOrigin &ori) {
    Player *pl = (Player *)ori.getEntity();
    return pl ? pl : nullptr;
}
vector<function<bool(PlayerUseCmdEV)>> Player_use_cmd_call_backs;
LIAPI void Event::addEventListener(function<bool(PlayerUseCmdEV)> callback) {
    Player_use_cmd_call_backs.push_back(callback);
}
THook(bool,"?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
    MinecraftCommands *_this, unsigned int *a2, std::shared_ptr<CommandContext> x, char a4) {
    try {
        Player* sp     = MakeSP(x->getOrigin());
        bool    result = original(_this, a2, x, a4);
        if (sp) {
            string cmd = x->getCmd();
            if (cmd.at(0) == '/') {
                cmd = cmd.substr(1, cmd.size() - 1);
            }
            PlayerUseCmdEV player_use_cmd_event = {sp, cmd, result};

            if (!CallEventEx(Player_use_cmd_call_backs, player_use_cmd_event))
                return true;
        }
        return result;
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PlayerUseCmdEV");
    }
}


/////////////////// CmdBlockExe ///////////////////

class BaseCommandBlock;
class BlockSource;
vector<function<bool(CmdBlockExeEV)>> Cmd_block_exe_ev_call_backs;
LIAPI void Event::addEventListener(function<bool(CmdBlockExeEV)> callback) {
    Cmd_block_exe_ev_call_backs.push_back(callback);
}
THook(bool,"?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock *_this, BlockSource *a2, CommandOrigin *a3, bool *a4)
{
    try {
        CmdBlockExeEV cmd_block_execute_event = {offBaseCommandBlock::getCMD(_this), a3->getBlockPosition()};

        if (!CallEventEx(Cmd_block_exe_ev_call_backs, cmd_block_execute_event))
            return true;
        return original(_this, a2, a3, a4);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at CmdBlockExeEV");
    }
}


/////////////////// PlayerDeath ///////////////////

vector<function<void(PlayerDeathEV)>> Player_death_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerDeathEV)> callback) {
    Player_death_call_backs.push_back(callback);
}

THook(void *,"?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer &thi, void *src)
{
    try {
        PlayerDeathEV player_death_event = {&thi};

        CallEvent(Player_death_call_backs, player_death_event);
        return original(thi, src);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PlayerDeathEV");
    }
}


/////////////////// PlayerDestroy ///////////////////

vector<function<void(PlayerDestroyEV)>> Player_destroy_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerDestroyEV)> callback) {
    Player_destroy_call_backs.push_back(callback);
}
class BlockLegacy;
THook(bool,"?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy *_this, Player &pl, BlockPos &blkpos, Block &bl)
{
    try {
        PlayerDestroyEV player_destroy_event = {&pl, blkpos, &bl};

        CallEvent(Player_destroy_call_backs, player_destroy_event);
        return original(_this, pl, blkpos, bl);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PlayerDestroyEV");
    }
}


/////////////////// PlayerUseItemOn ///////////////////

vector<function<void(PlayerUseItemOnEV)>> Player_use_item_on_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerUseItemOnEV)> callback) {
    Player_use_item_on_call_backs.push_back(callback);
}

THook(bool,"?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      void *thi, ItemStack &a2, BlockPos a3_pos, unsigned char side, void *a5,void *a6_block)
{
    try {
        auto              sp                       = *dAccess<ServerPlayer**, 8>(thi);
        PlayerUseItemOnEV Player_use_item_on_event = {sp, &a2, a3_pos, side};

        CallEvent(Player_use_item_on_call_backs, Player_use_item_on_event);
        return original(thi, a2, a3_pos, side, a5, a6_block);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PlayerUseItemOnEV");
    }
}


/////////////////// MobHurted ///////////////////

vector<function<void(MobHurtedEV)>> Mob_hurted_call_backs;
LIAPI void Event::addEventListener(function<void(MobHurtedEV)> callback) {
    Mob_hurted_call_backs.push_back(callback);
}

THook(bool,"?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob *ac, ActorDamageSource &src, int damage, bool unk1_1, bool unk2_0)
{
    try {
        MobHurtedEV Mob_hurted_event = {ac, &src, damage};

        CallEvent(Mob_hurted_call_backs, Mob_hurted_event);
        return original(ac, src, damage, unk1_1, unk2_0);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at MobHurtedEV");
    }
}


/////////////////// PlayerUseItem ///////////////////

vector<function<void(PlayerUseItemEV)>> Player_use_item_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerUseItemEV)> callback) {
    Player_use_item_call_backs.push_back(callback);
}

THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", void *thi, ItemStack &a2)
{
    try {
        auto            sp                    = dAccess<ServerPlayer*, 8>(thi);
        PlayerUseItemEV player_use_item_event = {sp, &a2};

        CallEvent(Player_use_item_call_backs, player_use_item_event);
        return original(thi, a2);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PlayerUseItemEV");
    }
}


/////////////////// MobDie ///////////////////

vector<function<void(MobDieEV)>> Mob_die_call_backs;
LIAPI void Event::addEventListener(function<void(MobDieEV)> callback) {
    Mob_die_call_backs.push_back(callback);
}

THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob *mob, ActorDamageSource *ads)
{
    try {
        auto level = offPlayer::getLevel(mob);
        char v83;
        auto v6 =
            *(void**)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
        auto     src           = SymCall("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z", Actor*, Level*,
                           void*, bool)(level, v6, 0);
        MobDieEV mob_die_event = {mob, src};

        CallEvent(Mob_die_call_backs, mob_die_event);
        return original(mob, ads);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at MobDieEV");
    }
}


/////////////////// PreJoinEV ///////////////////

vector<function<void(PreJoinEV)>> Pre_join_call_backs;
LIAPI void Event::addEventListener(function<void(PreJoinEV)> callback) {
    Pre_join_call_backs.push_back(callback);
}
THook(void,"?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z",
    void *snh, NetworkIdentifier &neti, Certificate &cert)
{
    try {
        original(snh, neti, cert);
        PreJoinEV pre_join_event = {&cert};

        CallEvent(Pre_join_call_backs, pre_join_event);
    } catch (seh_exception) {
        LOG.p<LOGLVL::Error>("Exception at PreJoinEV");
    }
}

