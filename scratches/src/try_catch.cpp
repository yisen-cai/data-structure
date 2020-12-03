//
// Created by 蔡宜身 on 2020/12/2.
//
#include "try_catch.h"
#include <iostream>

void oldEnough(int age)
{
    try
    {
        if (age > 18)
        {
            std::cout << "Access granted - you are old enough.";
        }
        else if (age == 18)
        {
            throw (18.0f); // ok too.
        }
        else
        {
            throw (age);
        }
    }
    catch (int myNum)
    {
        std::cout << "Access denied - You must be at least 18 years old.\n";
        std::cout << "Age is: " << myNum  << std::endl;
    }
    catch (float age)
    {
        std::cout << "Just fit the require.\n";
        std::cout << "Age is: " << age  << std::endl;
    }
}

