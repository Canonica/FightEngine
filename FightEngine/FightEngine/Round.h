#pragma once
#include "Observer.h"
#include "Player.h"
class Round :
	public Observer
{
public:
	Round();
	~Round();

	void Notify();
	void StartRound();
	void FinishRound();

private :
	Player winner;
	Player looser;

};

