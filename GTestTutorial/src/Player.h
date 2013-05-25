/*
 * Player.h
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Enemy.h"

class Player: public Enemy {
public:
	Player();
	Player(std::string n);
	virtual ~Player();

	double getExperiencePoints() const {
		return dExperiencePoints;
	}

	void setExperiencePoints(double experiencePoints) {
		dExperiencePoints = experiencePoints;
	}

private:
	double dExperiencePoints;
};

#endif /* PLAYER_H_ */
