#pragma once

#include "Action.h"
#include "Player.h"
#include <typeinfo>

class Attack1 : public Action
{
public:
	Attack1();
	~Attack1();
	void Execute() override;

	

private :
	float damage;
	Player player;
};

