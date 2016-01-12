#include "stdafx.h"
#include "Block.h"
#include <iostream>

Block::Block()
{
	damageReduction = 0.5;

}


Block::~Block()
{
}

void Block::Execute()
{
	std::cout << "Player " << player->GetId() << " block " << std::endl;
	player->SetDamageReduction(damageReduction);
}
