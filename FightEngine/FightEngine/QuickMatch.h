#pragma once
#include "GameMode.h"
#include "Player.h"
class QuickMatch :
	public GameMode
{
public:
	QuickMatch();
	~QuickMatch();
	void StartGameMode();
	void DecideWinner();

private :
	Player winner;
	Player looser;


};

