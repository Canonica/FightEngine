#pragma once
#include "Action.h"
class Combo :
	public Action
{
public:
	Combo();
	~Combo();
	void Execute();

private :
	float damageMultiplicator;
};

