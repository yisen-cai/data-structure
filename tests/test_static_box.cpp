//
// Created by 蔡宜身 on 2020/12/1.
//
#include "Box.h"
#include "gtest/gtest.h"

TEST(TestStaticBox, staticMember) {
  ASSERT_EQ(1, 1);
  Box box1 = Box(1, 1, 1);
  ASSERT_EQ(1, Box::getCount());
  Box box2 = Box(1, 1, 1);
  ASSERT_EQ(2, Box::getCount());
}
