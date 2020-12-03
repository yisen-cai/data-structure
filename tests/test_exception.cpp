//
// Created by 蔡宜身 on 2020/12/2.
//
#include "MyException.h"
#include "gtest/gtest.h"

TEST(TestExceptions, MyException)
{
    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
}