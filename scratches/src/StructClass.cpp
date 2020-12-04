//
// Created by 蔡宜身 on 2020/12/3.
//
#include "StructClass.h"

double SalesData::averagePrice() const
{
    if (unitsSold)
    {
        return revenue / unitsSold;
    }
    return 0;
}

SalesData &SalesData::combine(const SalesData &rhs)
{
    unitsSold += rhs.unitsSold;
    revenue += rhs.revenue;
    bookNo = rhs.bookNo;
    return *this;
}

std::istream &SalesData::read(std::istream &is, SalesData &item)
{
    double price = 0;
    return is;
}

SalesData::SalesData(unsigned int UnitsSold, unsigned n, const std::string &BookNo)
    : unitsSold(UnitsSold), revenue(unitsSold * n), bookNo(BookNo)
{
}
const std::string &SalesData::getBookNo() const
{
    return bookNo;
}
