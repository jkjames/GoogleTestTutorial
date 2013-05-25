/*
 * Enemy.h
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Creature.h"
#include <string>

class Enemy: public Creature {
public:
	Enemy(unsigned int l,std::string n);
	Enemy(unsigned int l,std::string n,unsigned int hp);
	Enemy(unsigned int l,std::string n,unsigned int hp,unsigned int dmg);
	virtual ~Enemy();

	const std::string& getName() const {
		return sName;
	}

	void setName(const std::string& name) {
		sName = name;
	}

	unsigned int getUiHpPool() const {
		return uiHPPool;
	}

	void setUiHpPool(unsigned int uiHpPool) {
		uiHPPool = uiHpPool;
	}

	unsigned int getUiLevel() const {
		return uiLevel;
	}

	void setUiLevel(unsigned int uiLevel) {
		this->uiLevel = uiLevel;
	}

	unsigned int getUiDamage() const {
		return uiDamage;
	}

	void setUiDamage(unsigned int uiDamage) {
		this->uiDamage = uiDamage;
	}

private:
	static const int HPPOOL_GENERATOR_MULTIPLAYER = 15;
	static const int DAMAGE_GENERATOR_MULTIPLAYER = 5;
	unsigned int uiLevel;
	std::string sName;
	unsigned int uiHPPool;
	unsigned int uiDamage;
	unsigned int uiHPPoolGenerator(unsigned int uiLevel);
	unsigned int uiDamageGenerator(unsigned int uiLevel);
};

#endif /* ENEMY_H_ */
