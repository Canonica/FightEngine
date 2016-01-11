#pragma once
#include "Observer.h"

class Player;
class Timer;
class Round :
	public Observer
{
public:
	Round();
	~Round();

	void Notify();
	static void StartRound();
	void FinishRound();
	void EndTurn();
	void Turn();

private :
	Player* winner;
	Player* looser;
	Timer* timer;
	Player* currentPlayer;

};

