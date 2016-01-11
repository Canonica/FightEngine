#include "stdafx.h"
#include "Player.h"
#include "InputHandler.h"
#include <typeinfo>
#include <iostream>

static int nbPlayer = 0;

Player::Player()
{
	life = 100;
	score = 0;

	nbPlayer++;
	id = nbPlayer;

	position = id;

	inputHandler = new InputHandler();

	currentState = new Active();

}

Player::~Player()
{
}

void Player::SwitchState(PlayerState state)
{
}

void Player::ReceiveDamage(int damage)
{
}

void Player::Kill()
{
}

void Player::Play()
{
	if (typeid(currentState) != typeid(Stunned) && typeid(currentState) != typeid(Attacking)) {
		inputHandler->HandleInput();
	}
	else if (typeid(currentState) == typeid(Stunned)) {
		std::cout << "you are stunned" << std::endl;
	}
	else {
		std::cout << "you are attacking" << std::endl;
	}
}

InputHandler* Player::GetInputHandler() {
	return inputHandler;
}

int Player::GetPosition() {
	return position;
}

int Player::GetId() {
	return id;
}
