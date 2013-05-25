/*
 * Enemy_test.cpp
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#include "gtest/gtest.h"
#include "Enemy.h"

class EnemyTester : public ::testing::Test
{};

TEST_F(EnemyTester, BasicParametersTest)
{
	Enemy e(1,"Goliat");
	ASSERT_GT(e.getSizeX(),0);
	ASSERT_GT(e.getSizeY(),0);
	ASSERT_EQ(e.getPosX(),0);
	ASSERT_EQ(e.getPosY(),0);
	ASSERT_EQ(e.getUiLevel(),static_cast<unsigned int>(1));
	ASSERT_GT(e.getUiHpPool(),static_cast<unsigned int>(0));
	ASSERT_GT(e.getName(),"");
	ASSERT_GT(e.getUiDamage(),static_cast<unsigned int>(0));
}



