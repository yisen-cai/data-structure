#ifndef DATA_STRUCTURE_ARRAYS_M_H
#define DATA_STRUCTURE_ARRAYS_M_H

/**
 * Rotate arr[] of size n by d elements
 * Rotate one by one
 * @param arr array
 * @param d   number elements to be rotate
 * @param n   array size
 */
void rotateM1(int* arr, int d, int n);

/**
 * Rotate arr[] of size n by d elements
 * Using temp array
 * @param arr array
 * @param d   number elements to be rotate
 * @param n   array size
 */
void rotateM2(int* arr, int d, int n);

/**
 * Rotate arr[] of size n by d elements
 * A juggling Algorithm
 * This is an extension of method 2. Instead of moving one by one, divide the
 * array in different sets, where number of sets is equal GCD(Greatest Common
 * Divisor) of n and d and move the elements within sets.
 * @param arr
 * @param d
 * @param n
 */
void rotateM3(int* arr, int d, int n);

/**
 * Given to number, calculate the Greatest Common Divisor of them, then return
 * it.
 * @param a
 * @param b
 * @return gcd
 */
int getGCD(int a, int b);

/**
 * Rotate method 4
 * rotate(arr[], int d, int n)
 *     reverse(arr[], 1, d);
 *     reverse(arr[], d+1, n);
 *     reverse(arr[], 1, n);
 * @param arr
 * @param d
 * @param n
 */
void rotateM4(int* arr, int d, int n);

/**1, 2, 3, 4, 5, 6, 7    d=2,n=7
 * A<>Br:
 * A=[1, 2]
 * Bl=[3,4,5]
 * Br=[6,7]
 * ABlBr -> BrBlA
 * 6, 7, 3, 4, 5, [1, 2]  d=2,n=5
 *
 * A<>Br:
 * A=[6,7]
 * Bl=[3]
 * Br=[4,5]
 * ABlBr -> BrBlA
 *
 * 4,5,3,[6,7,1,2]        d=2,n=3
 * Al<>B
 * Al=[4]
 * Ar=[5]
 * B=[3]
 * # B is in position, remove B
 * AlArB -> BArAl
 *
 * # this need to solve
 * [3],5,4,[6,7,1,2]        d=2,n=2
 * Al<>B
 * Al=[5]
 * Ar=[4]
 * B=[]
 * [3, 4, 5, 6, 7, 1, 2]
 * B is in its position, remove B
 * AlArB -> BArAl
 *
 * Rotate method 5
 * A = arr[0..d-1], B = arr[d..n-1]
 * 1.
 *  1). If A is shorter, divide B to Bl and Br such that Br is of same length as
 * A. Swap A and Br to change ABlBr into BrBlA. Then recur on pieces of B.
 *
 *  2). If A is longer, divide A into Al and Ar such that Al is of same length
 * as B. Swap Al and B to change AlArB into BArAl. now B is at its final place.
 *  Then recur on pieces of A.
 * 2. Finally when A and B are of equal size block swap them.
 * @param arr
 * @param d
 * @param n
 */
void rotateM5(int arr[], int d, int n);

void swapArray(int* a1, int* a2, int size);

/**
 * Reverse array
 * @param arr   array
 * @param left
 * @param right
 */
void reverse(int* arr, int left, int right);

void reverseArray(int* arr, int start, int end);

#endif // DATA_STRUCTURE_ARRAYS_M_H
