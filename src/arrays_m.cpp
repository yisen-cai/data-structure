#include "arrays_m.h"

/**
 * When write for loop, make sure every single step is exactly is under control,
 * edge values etc.
 */

/**
 * Very simple implement
 */
void rotateM1(int *arr, int d, int n) {
  for (int i = 0; i < d; ++i) {
    // copy first element to temp
    int temp = *(arr + 0);

    // move rest to forward
    for (int j = 1; j < n; ++j) {
      *(arr + j - 1) = *(arr + j);
    }

    // assign to last element
    *(arr + n - 1) = temp;
  }
}

void rotateM2(int *arr, int d, int n) {
  // Copy to temp array
  // int temp[d];
  /*for (int i = 0; i < d; ++i)
  {
      *(temp + i) = *(arr + i);
  }*/

  // rest will loop n - d steps
  // How many steps will be need, in each step, modify which value.
  // Move rest forward by d step
  /*for (int i = 0; i < n - d; ++i)
  {
      *(arr + i) = *(arr + i + d);
  }*/

  // Assign temp to tail
  /*for (int i = 0; i < d; ++i)
  {
      *(arr + n - d + i) = *(temp + i);
  }*/
}

void rotateM3(int *arr, int d, int n) {
  // handle if d >= n
  d = d % n;
  int gcd = getGCD(d, n);

  for (int i = 0; i < gcd; ++i) {
    // every step first element
    int temp = *(arr + i);
    int j = i;

    while (true) {
      // next element
      int k = j + d;

      // edge condition
      if (k >= n) {
        k = k - n;
      }
      if (k == i) {
        break;
      }
      *(arr + j) = *(arr + k);
      j = k;
    }

    // last element
    arr[j] = temp;
  }
}

int getGCD(int a, int b) {
  if (b == 0) return a;
  return getGCD(b, a % b);
}

void rotateM4(int *arr, int d, int n) {
  if (d == 0) return;

  // in case the rotating factor is greater than array length
  d = d % n;
  reverse(arr, 0, d);
  reverse(arr, d, n);
  reverse(arr, 0, n);
}

void reverse(int *arr, int left, int right) {
  int mid = (left + right) / 2;
  for (int i = left; i < mid; ++i) {
    int temp = *(arr + i);
    // calculate each one location exactly.
    *(arr + i) = *(arr + right + left - i - 1);
    *(arr + right + left - i - 1) = temp;
  }
}

// simpler implement
void reverseArray(int *arr, int start, int end) {
  while (start < end) {
    int temp = *(arr + start);
    *(arr + start) = *(arr + end);
    *(arr + end) = temp;
    start++;
    end--;
  }
}

void rotateM5(int arr[], int d, int n) {
  // terminal condition
  if (d == 0 || d == n) return;

  // exactly half size
  if (n - d == d) {
    swapArray(arr, arr + d, d);
    return;
  }

  // ended
  if (n == d) {
    reverseArray(arr, 0, d);
  }

  // A is shorter
  if (d < n - d) {
    // swap A and Br
    swapArray(arr, (arr + n - d), d);
    rotateM5(arr, d, n - d);
  } else {
    swapArray((arr + d), (arr + n - d), d);
    rotateM5(arr + d, d, n - d);
  }
}

void swapArray(int *a1, int *a2, int size) {
  for (int i = 0; i < size; ++i) {
    int temp = *(a1 + i);
    *(a1 + i) = *(a2 + i);
    *(a2 + i) = temp;
  }
}
