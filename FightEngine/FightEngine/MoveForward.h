#pragma once
#include "Action.h"
class MoveForward :
	public Action
{
public:
	MoveForward(char parInput);
	~MoveForward();
	void Execute();

private :
	float distance;
};

