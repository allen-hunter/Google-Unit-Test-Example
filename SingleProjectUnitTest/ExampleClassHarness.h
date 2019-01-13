#pragma once

#include <gtest/gtest.h>
#include "ExampleClass.h"


class ExampleClass;

/// <summary>
/// Google Test test harness for ExampleClass.
/// This harness sets up an instance of ExampleClass for use with unit tests
/// </summary>
/// <example>
/// <code>
/// TEST_F(ExampleClassHarness, isPositive)
///{
///	  int v = 1;
///	  bool res = false;
///	  bool res_expected = true;
///	  res = m_pExample->isPositive(v);
///	  ASSERT_EQ(res, res_expected);
///}
///</code>
///</example>
class ExampleClassHarness : public ::testing::Test
{
public:
	ExampleClassHarness();
	~ExampleClassHarness() override;
	static void SetUpTestCase();
	static void TearDownTestCase();
	void SetUp() override;
	void TearDown() override;
	static ExampleClass* m_pExample;
};
