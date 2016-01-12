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

	void DecideWinner(Player* winnerR1, Player* winnerR2, Player* winnerR3);

private:

	std::list<Round> listOfRounds;
	Player* winner;
	Player* looser;
};

