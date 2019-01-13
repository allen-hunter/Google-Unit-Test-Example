#pragma once
#include "ExampleClassHarness.h"


class ExampleClass
{
public:
	ExampleClass();
	~ExampleClass();
	bool isPositive(int iVal);
private:
	bool isNegative(int iVal);
public:
	FRIEND_TEST(ExampleClassHarness, isPositive);
	FRIEND_TEST(ExampleClassHarness, isNegative);
};
