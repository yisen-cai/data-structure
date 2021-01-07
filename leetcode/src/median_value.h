//
// Created by 蔡宜身 on 2021/1/7.
//

#ifndef DATA_STRUCTURE_LEETCODE_SRC_MEDIAN_VALUE_H
#define DATA_STRUCTURE_LEETCODE_SRC_MEDIAN_VALUE_H
#include <vector>

double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2);

double findMedianSortedArrays2(std::vector<int> &nums1, std::vector<int> &nums2);

double move_to_next(std::vector<int> &nums1, std::vector<int> &nums2, int &i1, int &i2);

#endif // DATA_STRUCTURE_LEETCODE_SRC_MEDIAN_VALUE_H
