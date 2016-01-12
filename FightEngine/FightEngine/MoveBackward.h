#pragma once
#include "Action.h"
class MoveBackward :
	public Action
{
public:
	MoveBackward(char parInput);
	~MoveBackward();
	void Execute() override;

private :
	float distance;
};

