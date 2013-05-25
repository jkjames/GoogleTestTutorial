/*
 * Player_test.cpp
 *
 *  Created on: 25-05-2013
 *      Author: Kuba
 */

#include "Player.h"
#include "gtest/gtest.h"

class PlayerTester : public ::testing::Test
{};

TEST_F(PlayerTester, BasicParametersTest)
{
	Player player("Bubu");
	ASSERT_GT(player.getSizeX(),0);
	ASSERT_GT(player.getSizeY(),0);
	ASSERT_EQ(player.getPosX(),0);
	ASSERT_EQ(player.getPosY(),0);
	ASSERT_EQ(player.getUiLevel(),static_cast<unsigned int>(1));
	ASSERT_GT(player.getUiHpPool(),static_cast<unsigned int>(0));
	ASSERT_GT(player.getName(),"");
	ASSERT_GT(player.getUiDamage(),static_cast<unsigned int>(0));
}
