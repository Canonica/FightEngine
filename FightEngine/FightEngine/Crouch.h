#pragma once
#include "Action.h"


class Crouch :public Action
{
public:
	Crouch();
	~Crouch();

	void Execute() override;


};

