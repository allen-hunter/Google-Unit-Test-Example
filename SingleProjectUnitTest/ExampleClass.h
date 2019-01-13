#pragma once
#include "Harness.h"


class ExampleClass
{
public:
	ExampleClass();
	~ExampleClass();
	bool isPositive(int iVal);
private:
	bool isNegative(int iVal);
public:
	FRIEND_TEST(Harness, isPositive);
	FRIEND_TEST(Harness, isNegative);
	//FRIEND_TEST(Harness, test_check_negative_fail);
};
