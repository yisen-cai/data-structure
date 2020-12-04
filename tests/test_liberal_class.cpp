//
// Created by 蔡宜身 on 2020/12/4.
//
#include "gtest/gtest.h"
#include "Debug.h"


TEST(TestLiteralClass, initialize)
{
    constexpr Debug io_sub(false, true, false);
    if(io_sub.any())
    {
        std::cerr << "print appropriate error message"  << std::endl;
    }
    constexpr Debug prod(false);
    if (prod.any())
    {
        std::cerr << "print an error message"  << std::endl;
    }
}