#pragma once

#include "Action.h"
#include "PlayerState.h"
#include "Player.h"
#include <typeinfo>


class Attack2 : public Action
{
public:
	Attack2(char parInput);
	~Attack2();
	void Execute() override;


private :
	int damage;
};

