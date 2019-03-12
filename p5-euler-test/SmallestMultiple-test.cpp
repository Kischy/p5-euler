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
	ASSERT_EQ(smallestmultiple.get_smallest_multiple_between(1, 10), 2520);
}

TEST_F(SmallestMultipleTestClass, NumberXisMultipleBetween1AndX)
{
	ASSERT_EQ(smallestmultiple.is_number_multiple(6, 1, 3), true);
	ASSERT_EQ(smallestmultiple.is_number_multiple(12, 1, 3), true);

}

TEST_F(SmallestMultipleTestClass, NumberXisNoMultipleBetween1AndX)
{
	ASSERT_EQ(smallestmultiple.is_number_multiple(6, 1, 4), false);
	ASSERT_EQ(smallestmultiple.is_number_multiple(20, 1, 5), false);
}


