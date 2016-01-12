#include "stdafx.h"
#include "MoveForward.h"
#include <iostream>
#include <Windows.h>

MoveForward::MoveForward(char parInput) :Action(parInput)
{


}


MoveForward::~MoveForward()
{


}


void MoveForward::Execute()
{

	std::cout << "Player " << player->GetId() << " move right " << std::endl;

	player->Move(1);
}
