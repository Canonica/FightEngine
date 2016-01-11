#include "stdafx.h"
#include "Game.h"
#include "Player.h"

Game::Game()
{
	//listOfGameModes = std::list<GameMode*>();
}


Game::~Game()
{
	m_instance = this;
}


Game* Game::Instance() {
	if (m_instance == nullptr) {
		m_instance = new Game();
	}
	return m_instance;
}