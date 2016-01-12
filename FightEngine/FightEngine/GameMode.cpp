#include "stdafx.h"
#include "GameMode.h"
#include "Player.h"
#include "Round.h"
#include <Windows.h>
#include <iostream>

GameMode::GameMode()
{
	listOfRounds = std::list<Round>();
}


GameMode::~GameMode()
{
}

void GameMode::StartGameMode()
{
	for (int i = 0; i < 3; i++) {
		Round().StartRound();
	}
	//DecideWinner(Round().StartRound(), Round().StartRound(), Round().StartRound());
}

void GameMode::DecideWinner(Player* winnerR1, Player* winnerR2, Player* winnerR3)
{
	int countP1 = 0;
	int countP2 = 0;

	if (winnerR1 == Game::Instance()->getPlayer(0)) {
		countP1++;
	}
	else {
		countP2++;
	}

	if (winnerR2 == Game::Instance()->getPlayer(0)) {
		countP1++;
	}
	else {
		countP2++;
	}

	if (winnerR3 == Game::Instance()->getPlayer(0)) {
		countP1++;
	}
	else {
		countP2++;
	}

	winner = countP1 < countP2 ? Game::Instance()->getPlayer(1) : Game::Instance()->getPlayer(0);

	std::cout << "The winner is Player " << winner->GetId() << " !" << std::endl;
	Sleep(3000);

}
