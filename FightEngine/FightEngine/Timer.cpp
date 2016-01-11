#include "stdafx.h"
#include "Timer.h"
#include <Windows.h>
#include <iostream>


Timer::Timer()
{
}


Timer::~Timer()
{
}

void Timer::Launch()
{
	int milliseconds = 0;
	int seconds = 0;
	int minutes = 0;
	for (;;) {
		if (milliseconds == 10) {
			seconds++;
			milliseconds = 0;
		}
		if (seconds == 60) {
			minutes++;
			seconds = 0;
		}
	
	}
}

void Timer::Stop()
{
}

void Timer::Pause()
{
}
