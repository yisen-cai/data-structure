//
// Created by 蔡宜身 on 2020/12/1.
//
#include "Shape.h"
#include "gtest/gtest.h"

TEST(TestVirtualFunction, virtualFunction)
{
    Shape *shape;
    Rectangle rec(2, 3);
    Triangle tri(2, 3);
    shape = &rec;

    // should invoke Rectangle instance area()
    shape->area();

    shape = &tri;

    // should invoke Triangle instance area()
    shape->area();
}