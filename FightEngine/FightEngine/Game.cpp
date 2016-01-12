#include "stdafx.h"
#include <typeinfo>
#include "Game.h"
#include "Player.h"
#include "QuickMatch.h"
#include "Tournament.h"
#include "Adventure.h"
#include <iostream>
#include <Windows.h>

Game* Game::m_instance = nullptr;
std::array<GameMode*, 3> Game::arrayOfGameModes = std::array<GameMode*, 3>();

Game::Game()
{
	arrayOfGameModes[0] = new QuickMatch();
	arrayOfGameModes[1] = new Tournament();
	arrayOfGameModes[2] = new Adventure();
	beginArena = 0;
	endArena = 5;
	listOfPlayers[0] = new Player(0);
	listOfPlayers[1] = new Player(1);
}


Game::~Game()
{
	m_instance = this;
	for (int i = 0; i<arrayOfGameModes.size(); i++)
		delete arrayOfGameModes[i];

	for (int i = 0; i<listOfPlayers.size(); i++)
		delete listOfPlayers[i];
	
	
}


Game* Game::Instance() {
	if (m_instance == nullptr) {
		m_instance = new Game();
	}
	return m_instance;
}

void Game::StartGame(GameMode::MODE gameMode) {

	if (GameMode::QUICK == gameMode) {
		std::cout << "quick" << std::endl;
		std::cin.get();
		arrayOfGameModes[0]->StartGameMode();
	}
	else if(gameMode == GameMode::TOURNAMENT){
		arrayOfGameModes[1]->StartGameMode();
	}
	else if(gameMode == GameMode::ADVENTURE) {
		arrayOfGameModes[2]->StartGameMode();
	}
}

Player * Game::getPlayer(int id)
{
	return listOfPlayers[id];
}