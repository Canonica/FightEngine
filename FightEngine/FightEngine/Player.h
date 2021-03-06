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
	Player(int n);
	~Player();
	void SwitchState(PlayerState::STATE state);
	void ReceiveDamage(int damage);
	void Kill();
	void Play();
	void Move(int n);
	//void Block();

	InputHandler* GetInputHandler();
	int GetPosition();
	int GetId();
	void SetDamageReduction(float reduction);
	PlayerState::STATE GetCurrentState();
	int GetLife();
	void ResetLife();

private :
	int id;
	float life;
	float score;
	Game* game;
	PlayerState::STATE currentState;
	InputHandler* inputHandler;
	int position;
	float damageReduction;
	
};



