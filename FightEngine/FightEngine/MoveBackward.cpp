#include "stdafx.h"
#include "MoveBackward.h"


MoveBackward::MoveBackward()
{
}


MoveBackward::~MoveBackward()
{
}

void MoveBackward::Execute()
{

	player->Move(-1);
}
