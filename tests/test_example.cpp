//
// Google test example
//
#include "gtest/gtest.h"

TEST(TestExample, logical)
{
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
}

TEST(TestExample, generalComparison)
{
    ASSERT_EQ(1, 1);
    ASSERT_NE(1, 2);

    ASSERT_LE(1, 2);
    ASSERT_GE(2, 1);

    ASSERT_LT(1, 2);
    ASSERT_GT(2, 1);
}

TEST(TestExample, floatPointComparison)
{
    ASSERT_FLOAT_EQ(1.0, 1.0);
    ASSERT_DOUBLE_EQ(1.0, 1.0);
    ASSERT_NEAR(1.0, 1.00001, 0.1);
}

TEST(TestExample, stringComparison)
{
    ASSERT_STREQ("1234", "1234");
    ASSERT_STRNE("1", "1234");
    ASSERT_STRCASEEQ("CAPITAL", "capital");
    ASSERT_STRCASENE("Abc", "Abc1");
}

TEST(TestExample, exceptionChecking)
{
    //    ASSERT_THROW(
    //        statement,
    //        exception_type
    //        );
    //
    //    ASSERT_ANY_THROW(
    //        statement
    //        );
    //
    //    ASSERT_NO_THROW(
    //        statement
    //        );
}