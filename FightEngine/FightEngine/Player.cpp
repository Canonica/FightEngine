#include "stdafx.h"
#include "Player.h"
#include "InputHandler.h"
#include <typeinfo>
#include <iostream>

static int nbPlayer = 0;

Player::Player()
{
}

Player::Player(int n)
{
	life = 100;
	score = 0;

	nbPlayer++;
	id = n;

	position = id;

	inputHandler = new InputHandler(this);

	currentState = PlayerState::ACTIVE;

	damageReduction = 1;

}

Player::~Player()
{
	delete inputHandler;
	//delete currentState; 
}

void Player::SwitchState(PlayerState::STATE state)
{
	currentState = state; 

}

void Player::ReceiveDamage(int damage)
{
	std::cout << "The Player "<< id << " receive " <<damage*damageReduction << " damages !" << std::endl;
	life -= (damage*damageReduction);
	if (life <= 0) {
		Kill();
	}
}

void Player::Kill()
{
	NotifyObservers();
}

void Player::Play()
{
	if (currentState != PlayerState::STUNNED && currentState != PlayerState::ATTACKING) {
		inputHandler->HandleInput();
	}
	else if (currentState == PlayerState::STUNNED) {
		std::cout << "you are stunned" << std::endl;
	}
	else {
		std::cout << "you are attacking" << std::endl;
	}
}

void Player::Move(int n)
{
	int posP1 = Game::Instance()->getPlayer(0)->GetPosition();
	int posP2 = Game::Instance()->getPlayer(1)->GetPosition();

	if (posP1 == position) {
		posP1 += n;
	}
	else {
		posP2 += n;
	}

	if (abs(posP1 - posP2) != 0) {
		position += n;
	}
}

/*void Player::Block()
{


}*/

InputHandler* Player::GetInputHandler() {
	return inputHandler;
}

int Player::GetPosition() {
	return position;
}

int Player::GetId() {
	return id;
}

void Player::SetDamageReduction(float reduction)
{
	damageReduction = reduction;

}

PlayerState::STATE Player::GetCurrentState()
{
	return currentState;
}

int Player::GetLife()
{
	return life;
}

void Player::ResetLife()
{
	life = 100;
}

