//
// Created by 蔡宜身 on 2021/1/7.
//
#include "gtest/gtest.h"
#include "longest_substring.cpp"

TEST(TestLeetCode, LongtestSubString) {
  std::string s1 = "abcabcbb";
  std::string s2 = "pwwkew";
  std::string s3 = "";
  std::string s4 = "bbbbbb";
  std::string s5 = "au";
  // little tricky, the last element need to be count
  std::string s6 = "aab";
  std::string s7 = "dvdf";

  ASSERT_EQ(lengthOfLongestSubstring1(s1), 3);
  ASSERT_EQ(lengthOfLongestSubstring1(s2), 3);
  ASSERT_EQ(lengthOfLongestSubstring1(s3), 0);
  ASSERT_EQ(lengthOfLongestSubstring1(s4), 1);
  ASSERT_EQ(lengthOfLongestSubstring1(s5), 2);
  ASSERT_EQ(lengthOfLongestSubstring1(s6), 2);
  ASSERT_EQ(lengthOfLongestSubstring1(s7), 3);
}