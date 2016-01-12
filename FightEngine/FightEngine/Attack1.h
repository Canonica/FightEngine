#pragma once

#include "Action.h"
#include "Player.h"
#include "PlayerState.h"
#include <typeinfo>

class Attack1 : public Action
{
public:
	Attack1();
	~Attack1();
	void Execute() override;

	

private :
	int damage;
};

