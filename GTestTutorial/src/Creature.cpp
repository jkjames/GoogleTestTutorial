/*
 * Creature.cpp
 *
 *  Created on: 24-05-2013
 *      Author: Kuba
 */

#include "Creature.h"

//Creature::DEFAULT_SIZE_X = 10;
//Creature::DEFAULT_SIZE_Y = 10;

Creature::Creature() :DEFAULT_SIZE_X(10),DEFAULT_SIZE_Y(10){
	iPosX = 0;
	iPosY = 0;
	iSizeX = DEFAULT_SIZE_X;
	iSizeY = DEFAULT_SIZE_Y;

}

Creature::~Creature() {
	// TODO Auto-generated destructor stub
}

