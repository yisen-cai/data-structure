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
 * Given to number, calculate the Greatest Common Divisor of them, then return it.
 * @param a
 * @param b
 * @return gcd
 */
int getGCD(int a, int b);
#endif // DATA_STRUCTURE_ARRAYS_M_H
