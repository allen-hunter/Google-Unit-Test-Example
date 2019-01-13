#include "pch.h"
#include "Harness.h"

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
