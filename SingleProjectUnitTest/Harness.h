#pragma once

#include <gtest/gtest.h>
#include "ExampleClass.h"

class ExampleClass;

class Harness : public ::testing::Test
{
public:
	Harness();
	~Harness();
	static void SetUpTestCase();
	static void TearDownTestCase();
	virtual void SetUp(void);
	virtual void TearDown(void);
	static ExampleClass* m_pExample;
};

