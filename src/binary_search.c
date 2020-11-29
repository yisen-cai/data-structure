#include "binary_search.h"

int binary_search(int* a, int size, int key)
{
    int left = 0, right = size - 1;
    int index = -1;
    // 循环不变式
    while (left <= right)
    {
        int mid = (right + left) / 2;

        if (key > a[mid])
        {
            left = mid + 1;
        }
        else if (key == a[mid])
        {
            // find it;
            // 基线条件
            index = mid;
            break;
        }
        else
        {
            right = mid - 1;
        }
    }
    return index;
}

int binary_search_recursively(int* arr, int left, int right, int key)
{
    // 基线条件
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    int index = -1;
    if (arr[mid] > key)
    {
        // 循环不变式
        return binary_search_recursively(arr, left, mid - 1, key);
    }
    else if (arr[mid] == key)
    {
        // 基线条件
        return mid;
    }
    else
    {
        return binary_search_recursively(arr, mid + 1, right, key);
    }
}