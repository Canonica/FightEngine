#include "stdafx.h"
#include "Combo.h"
#include <iostream>

Combo::Combo(Action* action1, Action* action2)
{
	arrayAction[0] = action1;
	arrayAction[1] = action2;
}


Combo::~Combo()
{
	
}

void Combo::Execute()
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

	if (abs(posP1 - posP2) == 1 && (PlayerEnemy->GetCurrentState() != PlayerState::JUMPING))
	{
		std::cout << "Player " << player->GetId() << " attack " << " Player " << PlayerEnemy->GetId() << std::endl;
		PlayerEnemy->ReceiveDamage(50);
	}

	arrayAction[0]->SetCurrentState(ActionState::NOTHING);
	arrayAction[1]->SetCurrentState(ActionState::NOTHING);
	currentState = ActionState::COOLDOWN;
}

void Combo::checkInput(char input)
{
	if (arrayAction[0]->GetCurrentState() == ActionState::READY && arrayAction[1]->GetCurrentState() == ActionState::READY) {
		currentState = ActionState::READY;
		nbOfPressedInputs++;
	}
}