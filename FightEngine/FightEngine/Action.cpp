#include "stdafx.h"
#include "Action.h"
#include <iostream>

Action::Action()
{
}

Action::~Action()
{
}

void Action::Execute()
{
	std::cout << "action problem" << std::endl;
}

void Action::SwitchState(ActionState state)
{
	currentState = state;
}

void Action::SetPlayer(Player *p) {
	player = p;
}
