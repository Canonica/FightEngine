#pragma once
#include <list>

class Round;
class GameMode
{
public:
	GameMode();
	~GameMode();
	void StartGameMode();

	enum MODE
	{
		QUICK,
		TOURNAMENT,
		ADVENTURE
	};

private:
	std::list<Round> listOfRounds;
};

