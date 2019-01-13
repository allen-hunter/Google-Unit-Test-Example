// SingleProjectUnitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


