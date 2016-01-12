#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>
#include <Windows.h>
#include "Combo.h"

InputHandler::InputHandler(Player* p) : player(p)
{
	actionArray = std::array<Action*, 14>();

	actionArray[PUNCH] = new Attack1('a');
	actionArray[KICK] = new Attack2('e');
	actionArray[FORWARD] = new MoveForward('d');
	actionArray[BACKWARD] = new MoveBackward('q');
	actionArray[JUMP] = new Jump('z');
	actionArray[BLOCK] = new Block('f');
	actionArray[CROUCH] = new Crouch('s');
	actionArray[HIGHPUNCH] = new Combo(actionArray[JUMP], actionArray[PUNCH]);
	actionArray[LOWPUNCH] = new Combo(actionArray[CROUCH], actionArray[PUNCH]);
	actionArray[HIGHKICK] = new Combo(actionArray[JUMP], actionArray[KICK]);
	actionArray[LOWKICK] = new Combo(actionArray[CROUCH], actionArray[KICK]);
	actionArray[BACKFLIPKICK] = new Combo(actionArray[BACKWARD], actionArray[KICK]);
	actionArray[UPPERCUT] = new Combo(actionArray[BACKWARD], actionArray[PUNCH]);
	actionArray[NUTDESTROYER] = new Combo(actionArray[FORWARD], actionArray[PUNCH]);

	for (int i = 0; i < actionArray.size(); i++) {
		actionArray[i]->SetPlayer(player);
	}
}



InputHandler::~InputHandler()
{
	for (int i = 0; i<actionArray.size(); i++)
		delete actionArray[i];
}

void InputHandler::HandleInput()
{
	char input;
	ACTIONS action = ACTIONS::PUNCH;
	bool goodAction = true;
	const int nbActionByTurn = 2;


	for (int i = 0; i < nbActionByTurn; i++) {
		std::cout << "Player 0 : " << Game::Instance()->getPlayer(0)->GetLife();
		std::cout << " | Player 1 : " << Game::Instance()->getPlayer(1)->GetLife() << std::endl;
		std::cout << "enter input" << std::endl;
		std::cin >> input;

		for (int j = 0; j < actionArray.size(); j++) {
			actionArray[j]->checkInput(input);
		}
	}


	for (int j = actionArray.size() - 1; j >= 0; j--) {
		actionArray[j]->checkNunchExecute();
	}
}
