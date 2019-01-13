#pragma once
#include "ExampleClassHarness.h"

/// <summary>
/// This is a class that demonstrates exposing public and private methods to the google test framework.
/// This is accomplished via the FRIEND_TEST macro which designates friend access to the designated harness and test
/// </summary>
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
