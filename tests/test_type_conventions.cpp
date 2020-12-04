//
// Created by 蔡宜身 on 2020/12/4.
//
#include "gtest/gtest.h"
#include "StructClass.h"


TEST(TestTypeConventions, classDefaultConventions)
{
    std::string null_book = "9999";
    SalesData item = SalesData("");
    // default class-type conventions
    // convert string to SalesData class instance
    // Because null_book is a const value, then pass to combine convert to SalesData instance
    SalesData new_item = item.combine(null_book);
    ASSERT_EQ(null_book, new_item.getBookNo());

    // also ok
    SalesData new_item1 = item.combine(std::string("9999"));
    std::cout << "bookNo: " << new_item1.getBookNo() << std::endl;
    ASSERT_EQ("9999", new_item1.getBookNo());
}


TEST(TestTypeConventions, temporyParameterConventions)
{
    //
}



