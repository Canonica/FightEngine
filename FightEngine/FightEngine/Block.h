#pragma once
#include "Action.h"
class Block :
	public Action
{
public:
	Block(char parInput);
	~Block();
	void Execute() override;

private :
	float damageReduction; 
};

