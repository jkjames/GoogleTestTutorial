#include <iostream>
#include "gtest/gtest.h"


class A
{
	public :
	int a;
	A() : a(0){}
	A(int aaa) : a(aaa){}
	~A(){}
	int getA(){return a;}
};

class B : public A
{
public :
	B() : A(0){}
	B(int b): A(b){}
	~B(){}
};


static const bool RUN_TESTS = 1;
int main(int argc,char* argv[])
{
	B b(1);
	std::cout<<b.getA();
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
