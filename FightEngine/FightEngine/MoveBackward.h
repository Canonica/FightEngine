#pragma once
#include "Action.h"
class MoveBackward :
	public Action
{
public:
	MoveBackward();
	~MoveBackward();
	void Execute() override;

private :
	float distance;
};

