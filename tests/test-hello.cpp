#include "hello.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(TestHello, definition)
{
    std::cout << "The hello version is: " << HELLO_VERSION << std::endl;
}