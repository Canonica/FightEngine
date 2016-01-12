#include "stdafx.h"
#include "Attack2.h"


Attack2::Attack2()
{

	damage = 10;
}


Attack2::~Attack2()
{
}

void Attack2::Execute()
{
	int posP1 = Game::Instance()->getPlayer(0)->GetPosition();
	int posP2 = Game::Instance()->getPlayer(1)->GetPosition();

	Player* PlayerEnemy;

	if (posP1 == player->GetPosition()) {
		PlayerEnemy = Game::Instance()->getPlayer(1);
	}
	else {
		PlayerEnemy = Game::Instance()->getPlayer(0);
	}

	if (abs(posP1 - posP2) == 1 && (typeid(PlayerEnemy->GetCurrentState()) != typeid(Jumping)))
	{
		PlayerEnemy->ReceiveDamage(damage);
	}

}
