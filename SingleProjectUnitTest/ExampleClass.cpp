#include "pch.h"
#include "ExampleClass.h"

ExampleClass::ExampleClass()
{
}


ExampleClass::~ExampleClass()
{
}

bool ExampleClass::isPositive(int iVal)
{
	if (iVal > 0)
		return true;
	else
		return false;
}

bool ExampleClass::isNegative(int iVal)
{
	if (iVal < 0)
		return true;
	else
		return false;
}

