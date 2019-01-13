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
};

