#include "arrays_m.h"
/**
 * When write for loop, make sure every single step is exactly is under control,
 * edge values etc.
 */

/**
 * Very simple implement
 */
void rotateM1(int* arr, int d, int n)
{
    for (int i = 0; i < d; ++i)
    {
        // copy first element to temp
        int temp = *(arr + 0);

        // move rest to forward
        for (int j = 1; j < n; ++j)
        {
            *(arr + j - 1) = *(arr + j);
        }

        // assign to last element
        *(arr + n - 1) = temp;
    }
}

void rotateM2(int* arr, int d, int n)
{
    // Copy to temp array
    int temp[d];
    for (int i = 0; i < d; ++i)
    {
        *(temp + i) = *(arr + i);
    }

    // rest will loop n - d steps
    // How many steps will be need, in each step, modify which value.
    // Move rest forward by d step
    for (int i = 0; i < n - d; ++i)
    {
        *(arr + i) = *(arr + i + d);
    }

    // Assign temp to tail
    for (int i = 0; i < d; ++i)
    {
        *(arr + n - d + i) = *(temp + i);
    }
}

void rotateM3(int* arr, int d, int n)
{
}

int getGCD(int a, int b)
{
    if (b == 0)
        return a;
    return getGCD(b, a % b);
}
