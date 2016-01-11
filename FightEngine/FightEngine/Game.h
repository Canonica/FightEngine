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
	static void StartGame(GameMode::GAMEMODE gameMode);
	
private:
	static Game* m_instance;
	static std::array<GameMode*, 3> arrayOfGameModes;
	int beginArena;
	int endArena;
	//std::array<Player, 2> listOfPlayers;
};

