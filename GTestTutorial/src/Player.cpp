/*
 * Player.cpp
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#include "Player.h"

static const std::string DEFAULT_NAME = "Unknown Player";

Player::Player(void) : Enemy(1,DEFAULT_NAME), dExperiencePoints(0)
{}

Player::Player(std::string n) : Enemy(1,n), dExperiencePoints(0)
{}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

