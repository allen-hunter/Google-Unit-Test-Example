#pragma once

#include <gtest/gtest.h>
#include "ExampleClass.h"


class ExampleClass;

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
