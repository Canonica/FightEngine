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
	static Game* Instance();
	
private:
	static Game* m_instance;
	//std::list<GameMode*> listOfGameModes;
	//std::array<Player, 2> listOfPlayers;
};

