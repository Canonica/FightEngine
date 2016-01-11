#pragma once
#include "Action.h"
class Block :
	public Action
{
public:
	Block();
	~Block();
	void Execute() override;

private :
	float damageReduction; 
};

