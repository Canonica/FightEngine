#include "stdafx.h"
#include "Action.h"


Action::Action()
{
}

Action::~Action()
{
}

void Action::SwitchState(ActionState state)
{
	currentState = state;
}

void Action::SetPlayer(Player *p) {
	player = p;
}
