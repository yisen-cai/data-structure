//
// Created by 蔡宜身 on 2020/12/1.
//
#include "reference.h"
#include <iostream>

void typeConvention()
{
    bool b = 42;          // b is true
    int i = b;            // i has value 1
    i = 3.14;             // i has value 3
    double pi = i;        // pi has value 3.0
    unsigned char c = -1; // assuming 8-bit chars, c has value 255
    // signed char 42 = 256;
    // overflow, assuming 8-bit chars, the value of c2 is undefined

    unsigned u = 10;
    int k = -42;
    std::cout << k + k << std::endl; // will be -84
    std::cout << u + k << std::endl; // if 32-bit ints print 4294967264
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl; // ok: result is right
    std::cout << u2 - u1 << std::endl; // ok: but result will wrap around
    // fact that unsigned cannot be less than zero also affect how to write
    // loops
    for (int j = 10; j >= 0; --j)
    {
        // should not use unsigned type
    }

    for (unsigned u3 = 10; u3 >= 0; --u3)
    {
        // loop won't stop
    }

    // while will ok, it's run more one loop
    unsigned u4 = 10;
    while (u4 > 0)
    {
        --u4;
    }
}
void literals()
{
    // default, decimal literal are signed
    // whereas octal and hexadecimal literals can be either signed or unsigned
    int decimal = 20;
    int octal = 024;
    int hexadecimal = 0x14;
    float pi = 3.14159;
    float point = 0e0;
}
void defineVariable()
{
    int sum = 0, value, units_sold = 0;
    std::string book("0-201-78345-X");

    // In C++, initialization is not assignment. Initialization happens when
    // a variable is given a value when it is created. Assignment obliterates an
    // object's current value and replaces that value with a new one.

    // List initialization
    // Braced list of initializers
    int units_sold1 = 0;
    int units_sold2 = {0};
    int units_sold3{0};
    // new standard
    int units_sold4(0);

    // The compiler will not let us initialize variables of built-in type if the
    // initializer might lead to the loss of information
    long double ld = 3.1415926536;
    // int a{ld}, b = {ld}; // error: narrowing conversion required
    int c(ld), d = ld; // ok: but value will be truncated
}

void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int sum(int a, int b)
{
    return a + b;
}

double vars[] = {10.1, 12.6, 33.1, 24.1, 50.0};
/**
 * A C++ program can be made easier to read and maintain by using references
 * rather than pointers. A C++ can return a reference in a similar way as it
 * returns a pointer.
 *
 * When a function returns a reference, it returns an implicit pointer to its
 * return value. This way, a function can be used on the left side of an
 * assignment statement.
 * @param i
 * @return
 */
double& setValues(int i)
{
    return vars[i];
}

/**
 * When returning a reference, be careful that the object being referred does
 * not out of scope. It is not legal to return a reference to local var.
 * @return
 */
int& func()
{
    // q;
    // return q;    // Compile time error
    static int x;
    return x; // Safe, x lives outside this scope
}

void useReferenceFunction()
{
    std::cout << "Before assign:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << vars[i] << ",";
    }
    setValues(1) = 20.23;
    setValues(3) = 70.8;

    std::cout << "After assign:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << vars[i] << ",";
    }
}