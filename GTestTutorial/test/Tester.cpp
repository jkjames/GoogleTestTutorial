#include "gtest/gtest.h"
#include "Creature.h"

class Tester : public ::testing::Test
{};

TEST_F(Tester, MyFirstTest)
{
	ASSERT_TRUE(true);
}

TEST_F(Tester, CreatureTestSizeX)
{
	Creature c;
	ASSERT_EQ(c.getSizeX(),c.DEFAULT_SIZE_X);
}

TEST_F(Tester, CreatureTestSizeY)
{
	Creature c;
	ASSERT_EQ(c.getSizeY(),c.DEFAULT_SIZE_Y);
}

TEST_F(Tester, CreatureTestPosX)
{
	Creature c;
	ASSERT_EQ(c.getPosX(),0);
}

TEST_F(Tester, CreatureTestPosY)
{
	Creature c;
	ASSERT_EQ(c.getPosY(),0);
}


