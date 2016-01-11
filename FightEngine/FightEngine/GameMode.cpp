#include "stdafx.h"
#include "GameMode.h"
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
	/*for (int i = 0; i < 3; i++) {
		listOfRounds.push_back(Round());
	}*/
	for (int i = 0; i < 3; i++) {
		//std::cout << "Starting round " << i << "of" << 3 << std::endl;
		//listOfRounds.front().StartRound();
		Round().StartRound();
	}
}
