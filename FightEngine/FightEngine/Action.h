#pragma once
#include "ActionState.h"
#include "Player.h"

class Action
{
public:
	Action();
	Action(char parInput);
	~Action();

	virtual void Execute()=0;
	void SwitchState(ActionState::eActionState state);
	void SetPlayer(Player* p);
	virtual void checkInput(char input);
	ActionState::eActionState GetCurrentState();
	void SetCurrentState(ActionState::eActionState parActionState);
	bool checkNunchExecute();

protected :
	float launchDelay;
	float activationDelay;
	float cooldownDelay;
	char input;
	int nbOfPressedInputs;
	
	ActionState::eActionState currentState;
	Player *player;
};

