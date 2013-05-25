/*
 * Enemy.cpp
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#include "Enemy.h"

Enemy::Enemy(unsigned int l, std::string n) : uiLevel(l), sName(n)
{
	Enemy::uiHPPool = Enemy::uiHPPoolGenerator(l);
	Enemy::uiDamage = Enemy::uiDamageGenerator(l);
}

Enemy::Enemy(unsigned int l, std::string n, unsigned int hp) : uiLevel(l), sName(n), uiHPPool(hp)
{
	Enemy::uiDamage = Enemy::uiDamageGenerator(l);
}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

unsigned int Enemy::uiHPPoolGenerator(unsigned int uiLevel) {
	return uiLevel*HPPOOL_GENERATOR_MULTIPLAYER;
}

Enemy::Enemy(unsigned int l, std::string n, unsigned int hp, unsigned int dmg) : uiLevel(l), sName(n), uiHPPool(hp), uiDamage(dmg)
{}

unsigned int Enemy::uiDamageGenerator(unsigned int uiLevel) {
	return uiLevel*DAMAGE_GENERATOR_MULTIPLAYER;
}

