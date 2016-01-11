#pragma once
#include "Action.h"
class Block :
	public Action
{
public:
	Block();
	~Block();
	void Execute();

private :
	float damageReduction; 
};

