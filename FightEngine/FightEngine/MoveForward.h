#pragma once
#include "Action.h"
class MoveForward :
	public Action
{
public:
	MoveForward();
	~MoveForward();
	void Execute();

private :
	float distance;
};

