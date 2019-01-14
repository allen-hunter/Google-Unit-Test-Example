#include "pch.h"
#include "ExampleClassHarness.h"

TEST_F(ExampleClassHarness, isPositive)
{
	int v = 1;
	bool res = false;
	bool res_expected = true;

	res = m_pExample->isPositive(v);

	ASSERT_EQ(res, res_expected);
}

TEST_F(ExampleClassHarness, isNegative)
{
	int v = -1;
	bool res = false;
	bool res_expected = true;

	res = m_pExample->isNegative(v);

	ASSERT_EQ(res, res_expected);
}

TEST(GenericExamples, StreamAppend)
{
	EXPECT_TRUE(false) << "demonstrating the appending of a stream";
}
