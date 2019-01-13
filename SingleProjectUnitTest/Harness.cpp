#include "pch.h"
#include "Harness.h"


Harness::Harness()
{
}


Harness::~Harness()
{
}

void Harness::SetUpTestCase()
{
}

void Harness::TearDownTestCase()
{
}

void Harness::SetUp(void)
{
}

void Harness::TearDown(void)
{
}

TEST(Foo, Bar)
{
	EXPECT_EQ(0, 0);
}