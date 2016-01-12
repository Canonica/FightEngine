#pragma once
#include "LooseCondition.h"
#include "GameMode.h"
class Timer :
	public LooseCondition
{
public:
	Timer();
	~Timer();
	static void Launch();
	void Stop();

private :
	float time;
	static bool isTiming;
	GameMode* gameMode;
};

