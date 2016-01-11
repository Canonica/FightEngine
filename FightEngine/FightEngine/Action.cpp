#include "stdafx.h"
#include "Action.h"


Action::Action()
{
}

Action::~Action()
{
}

void Action::Execute()
{
}

void Action::SwitchState(ActionState state)
{
}

void Action::SetPlayer(Player *p) {
	player = p;
}
