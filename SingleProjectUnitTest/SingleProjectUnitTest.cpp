// SingleProjectUnitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// To set up a project for google unit test:
// 1. use NuGet(right click project) to add one of the Microsoft.googletest adapters(depending on whether you want static or dynamic compilation, and static or dynamic runtime).Static / Dynamic is recommended
// 2.add #define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to preprocessor definitions(hopefully the need to do this will soon disappear)
//
// As you add tests, you may want to designate test playlists to define test suites for standalone testing, testing with hardware, testing with databases, etc...
// You can do this by right clicking the individual tests then selecting "add to playlist"


#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";
	// the following is required to set up the google test framework
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


