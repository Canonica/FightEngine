#pragma once
#include "Round.h"
#include <list>
class GameMode
{
public:
	GameMode();
	~GameMode();
	void StartGameMode();
private:
	int nbOfRounds;
	//std::list<Round> listOfRounds;
};

