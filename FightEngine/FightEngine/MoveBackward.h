#pragma once
#include "Action.h"
class MoveBackward :
	public Action
{
public:
	MoveBackward();
	~MoveBackward();
	void Execute();

private :
	float distance;
};

