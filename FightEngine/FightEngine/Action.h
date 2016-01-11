#pragma once
#include "ActionState.h"
class Action
{
public:
	Action();
	~Action();

	void Execute();
	void SwitchState(ActionState state);

private :
	float launchDelay;
	float activationDelay;
	float cooldownDelay;
	ActionState currentState;
};

