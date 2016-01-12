#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>
#include <Windows.h>

InputHandler::InputHandler(Player* p) : player(p)
{
	actionArray = std::array<Action*, 7>();

	actionArray[PUNCH] = new Attack1();
	actionArray[KICK] = new Attack2();
	actionArray[FORWARD] = new MoveForward();
	actionArray[BACKWARD] = new MoveBackward();
	actionArray[JUMP] = new Jump();
	actionArray[BLOCK] = new Block();
	actionArray[CROUCH] = new Crouch();

	std::cout << actionArray.size() << std::endl;

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
	ACTIONS action;
	bool goodAction = true;

	for (int i = 0; i < 2; i++) {
		std::cout << "enter input" << std::endl;
		std::cin >> input;

		switch (input) {
		case 'q': action = BACKWARD;
			break;
		case 'd': action = FORWARD;
			break;
		case 'z': action = JUMP;
			break;
		case 's': action = CROUCH;
			break;
		case 'a': action = PUNCH;
			break;
		case 'e': action = KICK;
			break;
		case 'f': action = CROUCH;
			break;
		default: i--;
			goodAction = false;
		}


		if (goodAction) {
			std::cout << "input entered : " << input << " -> " << action << std::endl;
			actionArray[action]->Execute();
		}
	}
}
