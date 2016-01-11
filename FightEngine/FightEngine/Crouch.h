#pragma once
#include "Action.h"
#include"Crouching.h"


class Crouch :public Action
{
public:
	Crouch();
	~Crouch();

	void Execute() override;


};

