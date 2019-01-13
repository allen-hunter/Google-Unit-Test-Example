#pragma once

#include <gtest/gtest.h>

class Harness : public ::testing::Test
{
public:
	Harness();
	~Harness();
	static void SetUpTestCase();
	static void TearDownTestCase();
	virtual void SetUp(void);
	virtual void TearDown(void);
};

