/*
 * Creature.h
 *
 *  Created on: 24-05-2013
 *      Author: Kuba
 */

#ifndef CREATURE_H_
#define CREATURE_H_

class Creature {
public:
	const int DEFAULT_SIZE_X;
	const int DEFAULT_SIZE_Y;
	Creature();
	virtual ~Creature();
	bool bMoveXY(int, int);
	bool bMoveX(int);
	bool bMoveY(int);

	int getPosX() const {
		return iPosX;
	}

	void setPosX(int posX) {
		iPosX = posX;
	}

	int getPosY() const {
		return iPosY;
	}

	void setPosY(int posY) {
		iPosY = posY;
	}

	int getSizeX() const {
		return iSizeX;
	}

	void setSizeX(int sizeX) {
		iSizeX = sizeX;
	}

	int getSizeY() const {
		return iSizeY;
	}

	void setSizeY(int sizeY) {
		iSizeY = sizeY;
	}

private:
	int iPosX;
	int iPosY;
	int iSizeX;
	int iSizeY;
};

#endif /* CREATURE_H_ */
