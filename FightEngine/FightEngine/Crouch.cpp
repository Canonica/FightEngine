#include "stdafx.h"
#include "Crouch.h"
#include <iostream>

Crouch::Crouch()
{
}


Crouch::~Crouch()
{
}

void Crouch::Execute()
{
	std::cout << "Player " << player->GetId() << " Crouch" << std::endl;
	player->SwitchState(PlayerState::JUMPING);

}
