#pragma once
#include "Action.h"
class Attack1 :
	public Action
{
public:
	Attack1();
	~Attack1();
	void Execute();

private :
	float damage;
};

