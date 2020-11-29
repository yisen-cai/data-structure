#include "../src/func.h"
#include "gtest/gtest.h"

TEST(TestFunc, add)
{
    int result = add(5, 5);
    ASSERT_EQ(10, result);
}

TEST(TestFunc, world)
{
    ASSERT_FALSE(false);
}