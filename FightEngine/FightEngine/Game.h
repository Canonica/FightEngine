#pragma once
#include <array>
#include <list>
#include "GameMode.h"

class Player;
class Game
{
public:
	Game();
	~Game();
	static Game* Instance();
	static void StartGame(GameMode::MODE);
	Player* getPlayer(int id);
	
private:
	static Game* m_instance;
	static std::array<GameMode*, 3> arrayOfGameModes;
	std::array<Player*, 2> listOfPlayers;
	int beginArena;
	int endArena;
	//std::array<Player, 2> listOfPlayers;
};

