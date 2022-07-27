//
// Created by 蔡宜身 on 2021/1/7.
//
#include "gtest/gtest.h"
#include "median_value.h"

TEST(TestLeetCode, TestMedianValue1) {
  std::vector<int> v1 = {1, 2};
  std::vector<int> v2 = {3, 4};
  ASSERT_DOUBLE_EQ(findMedianSortedArrays(v1, v2), 2.5);
}

TEST(TestLeetCode, TestMedianValue2) {
  std::vector<int> v1 = {1, 2};
  std::vector<int> v2 = {3, 4};
  ASSERT_DOUBLE_EQ(findMedianSortedArrays2(v1, v2), 2.5);
}