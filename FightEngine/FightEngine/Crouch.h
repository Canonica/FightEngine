#pragma once
#include "Action.h"
#include"Crouching.h"
#include "PlayerState.h"


class Crouch :public Action
{
public:
	Crouch();
	~Crouch();

	void Execute() override;


};

