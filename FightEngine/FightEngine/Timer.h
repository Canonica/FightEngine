#pragma once
#include "LooseCondition.h"
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
};

