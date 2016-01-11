#pragma once
#include "ActionState.h"
#include "Player.h"

class Action
{
public:
	Action();
	~Action();

	virtual void Execute();
	void SwitchState(ActionState state);
	void SetPlayer(Player* p);

protected :
	float launchDelay;
	float activationDelay;
	float cooldownDelay;
	
	ActionState currentState;
	Player *player;
};

