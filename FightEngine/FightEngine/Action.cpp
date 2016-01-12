#include "stdafx.h"
#include "Action.h"
#include <iostream>

Action::Action() {
	input = -1;
	nbOfPressedInputs = 0;
}

Action::Action(char parInput)
{
	nbOfPressedInputs=0;
	input = parInput;
	currentState = ActionState::eActionState::NOTHING;
}

Action::~Action()
{
}

void Action::Execute()
{
	std::cout << "action problem" << std::endl;
}

void Action::SwitchState(ActionState::eActionState state)
{
	currentState = state;
}

void Action::SetPlayer(Player *p) {
	player = p;
}

void Action::checkInput(char parInput)
{
	if (input == parInput) {
		currentState = ActionState::READY;
		nbOfPressedInputs++;
	}
}

ActionState::eActionState Action::GetCurrentState()
{
	return currentState;
}

void Action::SetCurrentState(ActionState::eActionState parActionState)
{
	currentState = parActionState;
}

bool Action::checkNunchExecute()
{
	if (currentState == ActionState::READY) {
		std::cout << "execute " << std::endl;
		for (; nbOfPressedInputs > 0; nbOfPressedInputs--) {
			Execute();
		}
		return true;
	}
	return false;
}
