#pragma once
#include "Action.h"
#include "PlayerState.h"

class Jump :
	public Action
{
public:
	Jump(char parInput);
	~Jump();
	void Execute() override;

private:
	float jump;
};

