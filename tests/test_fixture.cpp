//
// Created by 蔡宜身 on 2020/12/2.
//
#include "gtest/gtest.h"

class MyTestFixture : public ::testing::Test
{
  public:
  protected:
    void SetUp()
    {
    }
    MyTestFixture()
    {
    }

    void TearDown()
    {
    }

  public:
    ~MyTestFixture()
    {
    }
};

TEST_F(MyTestFixture, TestName)
{
    //    a TEST() macro should be replaced with TEST_F() to allow the
    //    test to access the fixture's members and functions
}
