#pragma once
#include "ActionState.h"
class Action
{
public:
	Action();
	~Action();

	virtual void Execute();
	void SwitchState(ActionState state);

protected :
	float launchDelay;
	float activationDelay;
	float cooldownDelay;
	
	ActionState currentState;
};

