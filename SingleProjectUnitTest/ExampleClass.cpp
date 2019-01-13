#include "pch.h"
#include "ExampleClass.h"

ExampleClass::ExampleClass()
= default;


ExampleClass::~ExampleClass()
= default;

bool ExampleClass::isPositive(int iVal)
{
	if (iVal > 0) 
	{
		return true;
	}
	return false;
}

bool ExampleClass::isNegative(int iVal)
{
	if (iVal < 0) 
	{
		return true;
	}
	return false;
}

