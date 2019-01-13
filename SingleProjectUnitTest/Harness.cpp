#include "pch.h"
#include "Harness.h"




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
