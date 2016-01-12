#include "stdafx.h"
#include "Jump.h"
#include <iostream>

Jump::Jump(char parInput) :Action(parInput)
{
}


Jump::~Jump()
{
}

void Jump::Execute()
{
	std::cout << "Player " << player->GetId() << " Jump" << std::endl;
	player->SwitchState(PlayerState::JUMPING);

}
