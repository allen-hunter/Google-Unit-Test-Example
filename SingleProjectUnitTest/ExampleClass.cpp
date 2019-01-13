#include "pch.h"
#include "ExampleClass.h"

ExampleClass::ExampleClass()
= default;


ExampleClass::~ExampleClass()
= default;

/// <summary>basic function to determine if an int is positive</summary>
bool ExampleClass::isPositive(int iVal)
{
	if (iVal > 0) 
	{
		return true;
	}
	return false;
}

/// <summary>basic function to determine if an int is negative</summary>
bool ExampleClass::isNegative(int iVal)
{
	if (iVal < 0) 
	{
		return true;
	}
	return false;
}

