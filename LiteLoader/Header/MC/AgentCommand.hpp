// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_AGENTCOMMAND
#include "Extra/AgentCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_AGENTCOMMAND
class AgentCommand {
#include "Extra/AgentCommandAPI.hpp"
public:
    /*0*/ virtual ~AgentCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
    MCAPI void createAgent(class Player&, class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void createAgentOutputSuccess(class CommandOutput&, bool) const;
    MCAPI void reportSuccess(bool, class CommandOutput&) const;
    MCAPI bool runAgentCommand(class CommandOrigin const&, class CommandOutput&, class std::function<std::unique_ptr<class AgentCommands::Command> (class Player& )>) const;
    MCAPI void setAgentOwner(class Agent&, class Player&) const;
    MCAPI void tpAgent(class Player&, class CommandOrigin const&, class CommandOutput&) const;
    MCAPI static bool validateRange(class Agent*, class CommandOrigin const&, class CommandOutput&);
};