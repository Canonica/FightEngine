#pragma once
#include "LooseCondition.h"
#include "GameMode.h"
class Timer :
	public LooseCondition
{
public:
	Timer();
	~Timer();
	void Launch();
	void Stop();
	void Pause();

private :
	float time;
	GameMode gameMode;
};

