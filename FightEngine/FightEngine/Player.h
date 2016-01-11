#pragma once
#include "LooseCondition.h"
#include "Game.h"
#include "PlayerState.h"
class InputHandler;
class Player :
	public LooseCondition

{
public:
	Player();
	~Player();
	void SwitchState(PlayerState state);
	void ReceiveDamage(int damage);
	void Kill();


private :
	float life;
	float score;
	Game* game;
	PlayerState* currentState;
	InputHandler* inputHandler;
	
};



