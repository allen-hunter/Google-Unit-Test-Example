#include "pch.h"
#include "Harness.h"



TEST(Foo, Bar)
{
	EXPECT_EQ(0, 0);
}

TEST_F(Harness, isPositive)
{
	int v = 1;
	int res = 0;
	int res_expected = 1;

	res = m_pExample->isPositive(v);

	ASSERT_EQ(res, res_expected);
}

TEST_F(Harness, isNegative)
{
	int v = -1;
	int res = 0;
	int res_expected = 1;

	res = m_pExample->isNegative(v);

	ASSERT_EQ(res, res_expected);
}


ExampleClass* Harness::m_pExample = NULL;
Harness::Harness()
{
}

Harness::~Harness()
{
}

void Harness::SetUpTestCase()
{
	std::cout << "Set up test cases." << std::endl;

	if (m_pExample != NULL)
	{
		delete m_pExample;
	}

	m_pExample = new ExampleClass;
}

void Harness::TearDownTestCase()
{
	std::cout << "Tear down test cases." << std::endl;

	delete m_pExample; 
	m_pExample = NULL;
}

void Harness::SetUp(void)
{
}

void Harness::TearDown(void)
{
}
