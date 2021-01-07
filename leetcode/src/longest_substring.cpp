//
// Created by 蔡宜身 on 2021/1/7.
//
#include "longest_substring.h"
//#include <math.h>

/**
 * Move index i to the latter, check whether former substring  contains duplicate character
 * Time complexity: O(n^2)
 * @param s
 * @return
 */
int lengthOfLongestSubstring1(std::string s)
{
    int n = s.size();
    int result = 0;
    int prev_result = 0;
    int j_start = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = j_start; j < i; ++j)
        {
            if ((i == n) || s[j] == s[i])
            {
                result = std::max(prev_result, i - j_start);
                prev_result = result;
                // move to the next location
                j_start = j + 1;
                break;
            }
        }
    }
    return result == 0 ? s.size() : result;
}

/**
 * Method: Generate all the substring of the input string s, and then check whether the substring contains duplicate
 * Time complexity: O(n^3)
 */
int lengthOfLongestSubstring2(std::string s)
{
    int n = s.size();
    int result = 0;
    // generate all substrings of input s, O(n^2)
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (isContainsDuplicateCharacter(s, i, j))
            {
                result = std::max(result, j - i + 1);
            }
        }
    }
    return result;
}

/**
 * check whether s contains duplicate character
 * Time complexity: O(n)
 */
bool isContainsDuplicateCharacter(std::string s, int start, int end)
{
    int chars[128];
    for (int i = start; i <= end; i++)
    {
        int chaValue = (int)s[i];
        chars[chaValue]++;
        if (chaValue > 1)
            return false;
    }
    return true;
}