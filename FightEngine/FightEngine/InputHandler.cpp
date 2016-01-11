#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>


InputHandler::InputHandler()
{
	actionArray[PUNCH] = Attack1();
	actionArray[KICK] = Attack2();
	actionArray[FORWARD] = MoveForward();
	actionArray[BACKWARD] = MoveBackward();
	actionArray[JUMP] = Jump();
	actionArray[BLOCK] = Block();
	actionArray[CROUCH] = Crouch();

	for (int i = 0; i < sizeof(actionArray) / sizeof(Action); i++) {
		actionArray[i].SetPlayer(player);
	}
}


InputHandler::~InputHandler()
{
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
			actionArray[action].Execute();
			std::cout << "input entered : " << input << " -> " << action << std::endl;
		}
	}
}
