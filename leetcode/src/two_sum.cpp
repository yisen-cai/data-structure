//
// Created by 蔡宜身 on 2021/1/7.
//
#include <vector>

/**
 * Two Sum Solution 1
 * Time complexity  : O(n^2)
 * Space complexity : O(1)
 */
std::vector<int> twoSum1(std::vector<int> &nums, int target)
{
    std::vector<int> result;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
}

/**
 * merge sort the vector and then use binary search to search (target - i)
 * Time complexity : O(nlogn)
 * Space complexity: O(n)
 * @param nums
 * @param target
 * @return
 */
std::vector<int> twoSum2(std::vector<int> &nums, int target)
{

}

/**
 * Hash
 * @param nums
 * @param target
 * @return
 */
std::vector<int> twoSum3(std::vector<int> &nums, int target)
{
}
