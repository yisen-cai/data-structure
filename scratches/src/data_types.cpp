//
// Created by 蔡宜身 on 2020/12/1.
//
#include "data_types.h"
#include <iostream>

void dataSize()
{
    std::cout << "Size of char:" << sizeof(char) << std::endl;
    std::cout << "Size of int:" << sizeof(int) << std::endl;

    // Assign new value to enum
    c = blue;

    // C++ allow the char, int, and double data types have modifies preceding
    // them.
    /**
     * - signed
     * - unsigned
     * - long
     * - short
     */
    // default without int
    unsigned x;
    unsigned int x1;
    // or short
    // or long

    // Type Qualifiers in C++
    /**
     * - const        cannot not be changed by program during execution
     * - volatile     tells the compilers the variable may be changed in ways
     * not explicitly specified by the program
     * - restrict     only means by which the object it points to can be
     * accessed
     */

    // Storage Classes
    // Defines the scope and life-time of variables and/or functions with a C++
    // Program. These specifiers precede the type that they modify.
    /**
     * - auto
     * - register
     * - static
     * - extern
     * - mutable
     */
    {
        int mount;
        // auto storage class is the default storage class for all local
        // variables
        //        auto int month;
        // register storage class is used to define local variables that should
        // be in a register instead of RAM. Means that the variable has a
        // maximum size equal to the register size register should only be used
        // for variables that require quick access such as counters. means not
        // be stored in a register, means might be
        register int miles;
    }

    // extern storage class is used to give a reference of a global variable
    // that is visible to ALL the program files.

    // mutable specifier applies only to class objects, allows a member of an
    // object to override member function. a mutable member can be modified by a
    // const member function
}

void func()
{
    // local static variable
    static int i = 5;
    i++;
    std::cout << "i is " << i;
    std::cout << " and count is " << count << std::endl;
}
