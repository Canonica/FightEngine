#pragma once

#include "Action.h"


class Attack2 : public Action
{
public:
	Attack2();
	~Attack2();
	void Execute() override;


private :
	float damage;
	Player player;
};

