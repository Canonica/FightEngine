#pragma once
#include <array>
#include "Action.h"
#include "Player.h"
class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void HandleInput();
	enum ACTIONS {PUNCH, KICK, FORWARD, BACKWARD, JUMP, BLOCK, CROUCH};
	

private:
	std::array<Action, 7> actionArray;
	Player player;
};

