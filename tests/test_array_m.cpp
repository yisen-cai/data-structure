#include "arrays_m.h"
#include "gtest/gtest.h"

TEST(TestArrayM, rotateM1) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int result[] = {3, 4, 5, 6, 7, 1, 2};
  rotateM1(arr, 2, 7);
  for (int i = 0; i < 7; ++i) {
    ASSERT_EQ(arr[i], result[i]);
  }
}

// TEST(TestArrayM, rotateM2)
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7};
//    int result[] = {3, 4, 5, 6, 7, 1, 2};
//    rotateM2(arr, 2, 7);
//    for (int i = 0; i < 7; ++i)
//    {
//        ASSERT_EQ(arr[i], result[i]);
//    }
//}

TEST(TestArrayM, rotateM3) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int result[] = {3, 4, 5, 6, 7, 1, 2};
  rotateM3(arr, 2, 7);
  for (int i = 0; i < 7; ++i) {
    ASSERT_EQ(arr[i], result[i]);
  }
}

TEST(TestArrayM, reverse) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  // d = 3
  reverse(arr, 0, 3);
  reverse(arr, 3, 7);
  reverse(arr, 0, 7);
  for (int i = 0; i < 7; ++i) {
    std::cout << arr[i] << ",";
  }
}

TEST(TestArrayM, reverseArray) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  // d = 3
  reverse(arr, 0, 3);
  reverse(arr, 3, 7);
  reverse(arr, 0, 7);
  for (int i = 0; i < 7; ++i) {
    std::cout << arr[i] << ",";
  }
}

TEST(TestArrayM, rotateM4) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int result[] = {3, 4, 5, 6, 7, 1, 2};
  rotateM4(arr, 2, 7);
  for (int i = 0; i < 7; ++i) {
    ASSERT_EQ(arr[i], result[i]);
  }
}

TEST(TESTArrayM, swapArray) {
  int arr[] = {1, 2, 3, 4};
  int result[] = {3, 4, 1, 2};
  swapArray(arr, (arr + 2), 2);
  for (int i = 0; i < 4; ++i) {
    ASSERT_EQ(arr[i], result[i]);
  }
}

// TEST(TestArrayM, rotateM5)
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7};
//    int result[] = {4, 5, 6, 7, 1, 2, 3};
//    rotateM5(arr, 3, 7);
//    for (int i = 0; i < 7; ++i)
//    {
//        //        ASSERT_EQ(arr[i], result[i]);
//    }
//}
