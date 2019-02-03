#pragma once
#include "gtest/gtest.h"

template <class T>
class TemplateHarness : public ::testing::Test
{
	~TemplateHarness()
	{
		if (m_pExample != NULL)
		{
			delete m_pExample;
		}
	};
	static void SetUpTestCase() 
	{
		std::cout << "Set up test cases." << std::endl;
		if (m_pExample != NULL)
		{
			delete m_pExample;
		}
		m_pExample = new T;
	};
	static void TearDownTestCase()
	{
		std::cout << "Tear down test cases." << std::endl;

		delete m_pExample;
		m_pExample = NULL;
	};
	static T* m_pExample;
};
