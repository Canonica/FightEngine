#pragma once
#include "ActionState.h"
#include "Player.h"

class Action
{
public:
	Action();
	~Action();

	void Execute();
	void SwitchState(ActionState state);
	void SetPlayer(Player* p);

private :
	float launchDelay;
	float activationDelay;
	float cooldownDelay;
	ActionState currentState;
	Player *player;
};

