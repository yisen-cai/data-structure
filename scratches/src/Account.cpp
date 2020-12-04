//
// Created by 蔡宜身 on 2020/12/4.
//

#include "Account.h"

// define and initialize a static class member
// it can access outside the class
double Account::interestRate = initRate();

constexpr int Account::period;

void Account::rate(double rate)
{
    interestRate = rate;
}

double Account::initRate()
{
    return 0;
}
