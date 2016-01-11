#pragma once
#include "Round.h"
#include <list>
class GameMode
{
public:
	GameMode();
	~GameMode();
	void StartGameMode();

	enum GAMEMODE
	{
		QUICK,
		TOURNAMENT,
		ADVENTURE
	};

private:
	std::list<Round> listOfRounds;
};

