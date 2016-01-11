#include "stdafx.h"
#include "Block.h"


Block::Block()
{
	damageReduction = 0.5;

}


Block::~Block()
{
}

void Block::Execute()
{
	player->SetDamageReduction(damageReduction);

}
