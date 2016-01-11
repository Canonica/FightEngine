#include "stdafx.h"
#include "Game.h"
#include "Player.h"

Game* Game::m_instance = nullptr;

Game::Game()
{
	//listOfGameModes = std::list<GameMode*>();
	(*listOfPlayers)[0] = Player();
	(*listOfPlayers)[1] = Player();
}


Game::~Game()
{
	m_instance = this;
}


Game Game::Instance() {
	if (m_instance == nullptr) {
		m_instance = new Game();
	}
	return *m_instance;
}

Player * Game::getPlayer(int id)
{
	return &(*listOfPlayers)[id];
}
