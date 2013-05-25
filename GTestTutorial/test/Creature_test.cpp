/*
 * Creature_test.cpp
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#include "gtest/gtest.h"
#include "Creature.h"

class CreatureTester : public ::testing::Test
{};

TEST_F(CreatureTester, BasicParametersTest)
{
	Creature c;
	ASSERT_GT(c.getSizeX(),0);
	ASSERT_GT(c.getSizeY(),0);
	ASSERT_EQ(c.getPosX(),0);
	ASSERT_EQ(c.getPosY(),0);
}
