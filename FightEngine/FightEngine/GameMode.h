#pragma once
#include <list>

class Player;
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

	void DecideWinner(int n1, int n2);

private:

	std::list<Round*> listOfRounds;
	Player* winner;
	Player* looser;
};

