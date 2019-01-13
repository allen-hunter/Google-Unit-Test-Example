#pragma once

#include <gtest/gtest.h>
#include "ExampleClass.h"


class ExampleClass;

class Harness : public ::testing::Test
{
public:
	Harness();
	~Harness() override;
	static void SetUpTestCase();
	static void TearDownTestCase();
	void SetUp() override;
	void TearDown() override;
	static ExampleClass* m_pExample;
};
