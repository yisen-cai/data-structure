//
// Created by 蔡宜身 on 2021/1/7.
//
#include "median_value.h"

double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
    int l1 = nums1.size();
    int l2 = nums2.size();
    std::vector<int> out;
    int i1 = 0, i2 = 0;
    while (i1 < l1 && i2 < l2)
    {
        if (nums1[i1] < nums2[i2])
            out.push_back(nums1[i1++]);
        else
            out.push_back(nums2[i2++]);
    }
    while (i1 < l1)
        out.push_back(nums1[i1++]);

    while (i2 < l2)
        out.push_back(nums2[i2++]);

    if ((l1 + l2) % 2 != 0)
        // odd
        return (double)out[(l1 + l2) / 2];
    else
    {
        int m_ind = (l1 + l2) / 2;
        return ((double)out[m_ind] + (double)out[m_ind - 1]) / 2;
    }
}

double findMedianSortedArrays2(std::vector<int> &nums1, std::vector<int> &nums2)
{
    int l1 = nums1.size();
    int l2 = nums2.size();

    int mid_index = (l1 + l2) / 2;
    int i1 = 0, i2 = 0, curr = 0, prev = 0;

    for (int i = 0; i < mid_index; ++i)
    {
        prev = move_to_next(nums1, nums2, i1, i2);
    }

    // move to next
    curr = move_to_next(nums1, nums2, i1, i2);

    if ((l1 + l2) % 2 != 0)
    {
        // find next
        return (double)curr;
    }
    else
    {
        // cal prev and curr
        return ((double)curr + (double)prev) / 2;
    }
}

double move_to_next(std::vector<int> &nums1, std::vector<int> &nums2, int &i1, int &i2)
{
    int l1 = nums1.size();
    int l2 = nums2.size();
    int result = 0;
    if (i1 < l1 && i2 < l2)
    {
        result = nums1[i1] < nums2[i2] ? nums1[i1++] : nums2[i2++];
    }
    else if (i1 < l1 && i2 == l2)
        result = nums1[i1++];
    else if (i2 < l2 && i1 == l1)
        result = nums2[i2++];
    return (double)result;
}