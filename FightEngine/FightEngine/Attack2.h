#pragma once
#include "Action.h"
class Attack2 :
	public Action
{
public:
	Attack2();
	~Attack2();
	void Execute();

private :
	float damage;
};

