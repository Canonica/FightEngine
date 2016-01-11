#include "stdafx.h"
#include "GameMode.h"

#include "Round.h"

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
}
