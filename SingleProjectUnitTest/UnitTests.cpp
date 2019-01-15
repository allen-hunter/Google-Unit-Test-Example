#include "pch.h"
#include "ExampleClassHarness.h"



TEST(GenericExamples, StreamAppend)
{
	EXPECT_EQ(true,false) << "demonstrating the appending of a stream.  This is supposed to fail.";
}
