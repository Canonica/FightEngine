#pragma once
#include "LooseCondition.h"
#include "PlayerState.h"
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
	
};



