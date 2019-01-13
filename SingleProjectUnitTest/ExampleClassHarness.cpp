#include "pch.h"
#include "ExampleClassHarness.h"




ExampleClass* ExampleClassHarness::m_pExample = NULL;
ExampleClassHarness::ExampleClassHarness()
{
}

ExampleClassHarness::~ExampleClassHarness()
{
}

void ExampleClassHarness::SetUpTestCase()
{
	std::cout << "Set up test cases." << std::endl;

	if (m_pExample != NULL)
	{
		delete m_pExample;
	}

	m_pExample = new ExampleClass;
}

void ExampleClassHarness::TearDownTestCase()
{
	std::cout << "Tear down test cases." << std::endl;

	delete m_pExample; 
	m_pExample = NULL;
}

void ExampleClassHarness::SetUp(void)
{
}

void ExampleClassHarness::TearDown(void)
{
}
