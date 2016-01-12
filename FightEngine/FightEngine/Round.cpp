#include "stdafx.h"
#include "Round.h"

#include "Timer.h"
#include <iostream>
#include <Windows.h>
#include "Player.h"
#include <ctime>

Round::Round()
{
	running = true;
}


Round::~Round()
{
}

void Round::Notify()
{
	running = false;
}

void Round::StartRound()
{
	int maxMinutes = 0;
	int maxSeconds = 10;

	std::clock_t start;
	double duration;

	start = std::clock();
	
	Subject::RegisterObserver(this);
	//Timer::Launch();
	while (running) {
		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
		duration = maxSeconds - duration;
		system("cls");
		std::cout << duration << std::endl;
		
		/*Timer
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
		}*/
		//Jeu
		if (duration < 0) {
			running = false;
			break;
		}
		Player *player1 = Game::Instance()->getPlayer(0);
		player1->Play();
		Player *player2 = Game::Instance()->getPlayer(1);
		player2->Play();
		

	}
	
}

void Round::FinishRound()
{
}

void Round::EndTurn()
{
	
}

void Round::Turn()
{
}
