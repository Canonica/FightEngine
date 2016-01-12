#include "stdafx.h"
#include "GameMode.h"
#include "Player.h"
#include "Round.h"
#include <Windows.h>
#include <iostream>

GameMode::GameMode()
{
	listOfRounds = std::list<Round*>();
}


GameMode::~GameMode()
{
}

void GameMode::StartGameMode()
{
	int countP1 = 0;
	int countP2 = 0;
	for (int i = 0; i < 3; i++) {
		Round* r = new Round();
		r->StartRound();
		if (r->GetWinner()->GetId() == 0) {
			countP1++;
		}
		else {
			countP2++;
		}
	}
	DecideWinner(countP1,countP2);
}

void GameMode::DecideWinner(int n1, int n2)
{
	int winnerId = n1 < n2 ? 1 : 0;

	std::cout << "The winner is Player " << winnerId << " !" << std::endl;
	Sleep(3000);

}
