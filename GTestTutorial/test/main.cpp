#include <iostream>
#include "gtest/gtest.h"

static const bool RUN_TESTS = 1;
int main(int argc,char* argv[])
{
	if (RUN_TESTS)
	{
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
	}
	else
	{
		std::cout<<"We just run without tests"<<std::endl;
		return 0;
	}
}
