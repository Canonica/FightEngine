#pragma once
class PlayerState
{
public:

	enum STATE {
		ACTIVE,
		STUNNED,
		JUMPING,
		BLOCKING,
		ATTACKING
	};

	PlayerState();
	~PlayerState();
};

