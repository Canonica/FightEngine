#pragma once
#include "Action.h"
class MoveForward :
	public Action
{
public:
	MoveForward();
	~MoveForward();
	void Execute() override;

private :
	float distance;
};

