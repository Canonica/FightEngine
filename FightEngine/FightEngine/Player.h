#pragma once
#include "LooseCondition.h"
#include "Game.h"
#include "PlayerState.h"
#include "Stunned.h"
#include "Active.h"
#include "Jumping.h"
#include "Attacking.h"

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
	void Play();

	InputHandler* GetInputHandler();
	int GetPosition();
	int GetId();

private :
	int id;
	float life;
	float score;
	Game* game;
	PlayerState* currentState;
	InputHandler* inputHandler;
	int position;
	
};



