#include "binary_search_m.h"

int binary_search(int *a, int size, int key) {
  int left = 0, right = size - 1;
  int index = -1;
  // 循环不变式
  while (left <= right) {
    int mid = (right + left) / 2;

    if (key > a[mid]) {
      left = mid + 1;
    } else if (key == a[mid]) {
      // find it;
      // 基线条件
      index = mid;
      break;
    } else {
      right = mid - 1;
    }
  }
  return index;
}

int binary_search_recursively(int *arr, int left, int right, int key) {
  // 基线条件
  if (left > right) return -1;
  int mid = (left + right) / 2;
  if (arr[mid] > key) {
    // 循环不变式
    return binary_search_recursively(arr, left, mid - 1, key);
  } else if (arr[mid] == key) {
    // 基线条件
    return mid;
  } else {
    return binary_search_recursively(arr, mid + 1, right, key);
  }
}

int binary_search_in_rotate(int *arr, int left, int right, int key) {
  // one element last condition
  if (left == right) return key == *arr ? key : -1;

  int mid_ind = (left + right) / 2;
  int mid = *(arr + mid_ind);
  int result = -1;

  // left in order
  if (*(arr + left) <= mid) {
    result = binary_search((arr + left), (mid_ind - left), key);

    // if find add mid_ind to set its order
    if (result != -1) result += left;
  }
  // left not in order
  else {
    result = binary_search_in_rotate(arr, left, mid_ind, key);
  }

  // right in order
  if (*(arr + right) >= mid && result == -1) {
    result = binary_search((arr + mid_ind), (right - mid_ind + 1), key);

    // if find add mid_ind to set its order
    if (result != -1) result += mid_ind;
  } else if (*(arr + right) < mid && result == -1) {
    result = binary_search_in_rotate(arr, mid_ind + 1, right, key);
  }

  return result;
}

int print_hello() { return 0; }
