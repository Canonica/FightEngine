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
	InputHandler(Player* p);
	~InputHandler();
	void HandleInput();
	enum ACTIONS {
		PUNCH, KICK, FORWARD, BACKWARD, JUMP, BLOCK, CROUCH, HIGHPUNCH, LOWPUNCH, HIGHKICK, LOWKICK, BACKFLIPKICK, UPPERCUT, NUTDESTROYER
	};

private:
	std::array<Action*, 14> actionArray;
	Player *player;
};

