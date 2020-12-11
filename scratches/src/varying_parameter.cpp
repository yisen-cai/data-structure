#include "varying_parameter.h"


void errorMessage(std::initializer_list<std::string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
}

void errorMessageWithErrorCode(std::error_code e, std::initializer_list<std::string> il)
{
    std::cout << "Error message: " << e.message() << ":";
    for (const auto &elem: il)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
