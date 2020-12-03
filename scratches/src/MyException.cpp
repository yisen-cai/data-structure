//
// Created by 蔡宜身 on 2020/12/2.
//

#include "MyException.h"
const char* MyException::what() const noexcept
{
    return "My C++ Exception";
}

const char* StructException::what() const noexcept
{
    return "Struct Exception";
}
