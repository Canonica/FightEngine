#pragma once
#include "Action.h"
class Jump :
	public Action
{
public:
	Jump();
	~Jump();
	void Execute() override;

private:
	float jump;
};

