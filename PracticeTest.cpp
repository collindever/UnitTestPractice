/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capital_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Pennsylvania");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_in_order_numbers)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, reverse_order_numbers)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, reverse_greatest_least_middle_numbers)
{
    Practice obj;
	int first = 3;
	int second = 1;
	int third = 2;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, reverse_middle_greatest_least_numbers)
{
    Practice obj;
	int first = 2;
	int second = 3;
	int third = 1;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, reverse_middle_least_greatest_numbers)
{
    Practice obj;
	int first = 2;
	int second = 1;
	int third = 3;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}