#pragma once
#include "Action.h"
#include"Crouching.h"
#include "PlayerState.h"


class Crouch :public Action
{
public:
	Crouch(char parInput);
	~Crouch();

	void Execute() override;


};

