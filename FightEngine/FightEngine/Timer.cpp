#include "stdafx.h"
#include "Timer.h"
#include <Windows.h>
#include <iostream>

bool Timer::isTiming = false;

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

	int maxMinutes = 0;
	int maxSeconds = 10;
	
	for (;;) {
		if (isTiming) {
			return;
		}
		if (milliseconds == 10) {
			maxSeconds--;
			milliseconds = 0;
		}
		if (seconds == 60) {
			maxMinutes--;
			seconds = 0;
		}
		system("cls");
		if (maxSeconds < 10) {
			std::cout << maxMinutes << ":0" << maxSeconds;
		}
		else {
			std::cout << maxMinutes << ":" << maxSeconds;
		}
		++milliseconds;
		Sleep(100);
		if (maxMinutes == 0 && maxSeconds == 0) {
			system("cls");
			std::cout << "Game finished" << std::endl;
			Subject::NotifyObservers();
			return;
		}
	}
}

void Timer::Stop()
{
	isTiming = true;
}
