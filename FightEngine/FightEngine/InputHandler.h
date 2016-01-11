#pragma once
#include <array>
#include "Action.h"
#include "Player.h"
#include "Attack1.h"
#include "Attack2.h"
#include "MoveForward.h"
#include "MoveBackward.h"
#include "Jump.h"
#include "Block.h"
#include "Crouch.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void HandleInput();
	enum ACTIONS {PUNCH, KICK, FORWARD, BACKWARD, JUMP, BLOCK, CROUCH};
	

private:
	std::array<Action, 7> actionArray;
	Player *player;
};

