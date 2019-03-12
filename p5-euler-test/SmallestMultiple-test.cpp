#include "pch.h"

#include "../p5-euler/SmallestMultiple.h"


class SmallestMultipleTestClass : public testing::Test
{
public:
	SmallestMultiple smallestmultiple;
};

TEST(SmallestMultipleExists, Exists) {
	SmallestMultiple smallestmultiple;
}


TEST_F(SmallestMultipleTestClass, NumbersThatAreNotDevisable)
{
	ASSERT_EQ(smallestmultiple.is_divisable(5, 2), false);
	ASSERT_EQ(smallestmultiple.is_divisable(10, 3), false);
}

TEST_F(SmallestMultipleTestClass, NumbersThatAreDevisable)
{
	ASSERT_EQ(smallestmultiple.is_divisable(10, 5), true);
	ASSERT_EQ(smallestmultiple.is_divisable(0, 5), true);
}


TEST_F(SmallestMultipleTestClass, SmallestMultipleBetweenValues)
{
	ASSERT_EQ(smallestmultiple.get_smallest_even_multiple_between(1,10), 2520);
}


