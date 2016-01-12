#include "stdafx.h"
#include "CurrentAction.h"
#include "MoveBackward.h"

CurrentAction::CurrentAction()
{
}


CurrentAction::~CurrentAction()
{
}

void CurrentAction::Execute()
{
}

void CurrentAction::Add()
{
}

void CurrentAction::Remove()
{
}

Action* CurrentAction::GetChildren()
{
	return new MoveBackward();
}
