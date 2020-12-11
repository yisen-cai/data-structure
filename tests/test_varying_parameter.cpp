#include "gtest/gtest.h"
#include "varying_parameter.h"
#include <iostream>

TEST(TestVaryingParameter, passParameter)
{
    errorMessage({"functionX", "1", "0"});

    errorMessage({"functionX", "okay"});
    ASSERT_FALSE(false);
}

TEST(TestVaryingParameter, passErrorCode)
{
}