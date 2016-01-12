#include "stdafx.h"
#include "MoveBackward.h"
#include <iostream>

MoveBackward::MoveBackward(char parInput) :Action(parInput)
{
}


MoveBackward::~MoveBackward()
{
}


void MoveBackward::Execute()
{

	std::cout << "Player " << player->GetId() << " move left" << std::endl;
	player->Move(-1);
}
