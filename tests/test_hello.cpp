#include <iostream>

#include "gtest/gtest.h"
#include "hello.h"

TEST(TestHello, definition) {
  std::cout << "The hello version is: " << HELLO_VERSION << std::endl;
}