#pragma once
#include "GameMode.h"
#include <array>
#include <list>

class Player;
class Game
{
public:
	Game();
	~Game();
	static Game Instance();
	Player* getPlayer(int id);

private:
	static Game* m_instance;
	std::array<Player, 2> *listOfPlayers;
	//std::list<GameMode*> listOfGameModes;
};

