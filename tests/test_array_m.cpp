#include "../src/arrays_m.h"
#include "gtest/gtest.h"

TEST(TestArrayM, rotateM1)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rotateM2(arr, 2, 7);
    ASSERT_EQ(3, arr[0]);
    ASSERT_EQ(1, arr[5]);
}

