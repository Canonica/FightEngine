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
	Game::Instance()->getPlayer(0)->ResetLife();
	Game::Instance()->getPlayer(1)->ResetLife();
	running = true;

	int maxMinutes = 0;
	int maxSeconds = 30;

	std::clock_t start;
	double duration;

	start = std::clock();
	
	Subject::RegisterObserver(this);
	//Timer::Launch();
	while (running) {
		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
		duration = maxSeconds - duration;
		std::cout << std::endl;
		std::cout << "Time remaining : " << duration << std::endl;
		
		//Jeu
		if (duration < 0) {
			running = false;

			if (Game::Instance()->getPlayer(0)->GetLife() > Game::Instance()->getPlayer(1)->GetLife()) {
				winner = Game::Instance()->getPlayer(0);
				looser = Game::Instance()->getPlayer(1);
			}
			else {
				winner = Game::Instance()->getPlayer(1);
				looser = Game::Instance()->getPlayer(0);
			}
			
			break;
		}

		Player *player1 = Game::Instance()->getPlayer(0);
		player1->SwitchState(PlayerState::ACTIVE);
		player1->Play();
		Player *player2 = Game::Instance()->getPlayer(1);
		player2->SwitchState(PlayerState::ACTIVE);
		player2->Play();
		if (Game::Instance()->getPlayer(0)->GetLife() <= 0) {
			winner = Game::Instance()->getPlayer(1);
			looser = Game::Instance()->getPlayer(0);
		}
		else if (Game::Instance()->getPlayer(1)->GetLife() <= 0) {
			winner = Game::Instance()->getPlayer(0);
			looser = Game::Instance()->getPlayer(1);
		}
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

Player * Round::GetWinner()
{
	return winner;
}
