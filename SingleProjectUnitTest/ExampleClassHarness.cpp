#include "pch.h"
#include "ExampleClassHarness.h"


ExampleClass* ExampleClassHarness::m_pExample = NULL;

ExampleClassHarness::ExampleClassHarness()
{
}

ExampleClassHarness::~ExampleClassHarness()
{
}

///<summary>this is invoked before any test defined in ExampleClassHarness is run</summary>
void ExampleClassHarness::SetUpTestCase()
{
	std::cout << "Set up test cases." << std::endl;

	if (m_pExample != NULL)
	{
		delete m_pExample;
	}

	m_pExample = new ExampleClass;
}

///<summary>this is invoked after all tests defined in ExampleClassHarness are run</summary>
void ExampleClassHarness::TearDownTestCase()
{
	std::cout << "Tear down test cases." << std::endl;

	delete m_pExample; 
	m_pExample = NULL;
}

///<summary>this is invoked before each individual test using ExampleClassHarness is run</summary>
void ExampleClassHarness::SetUp(void)
{
}

///<summary>this is invoked after each individual test using ExampleClassHarness is run</summary>
void ExampleClassHarness::TearDown(void)
{
}

//###############################################################################################
// Tests:
//###############################################################################################
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