//
// Created by 蔡宜身 on 2020/12/3.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_STRUCTCLASS_H
#define DATA_STRUCTURE_SCRATCHES_SRC_STRUCTCLASS_H
#include <string>

struct SalesData
{

    SalesData(unsigned int UnitsSold,  unsigned n, const std::string &BookNo);

    // A  constructor that supplies default arguments for all its parameters also
    // defines the default constructor(implicitly)
    // defines the default constructor as well as one that takes a string argument


    // explicit Constructor can be used only for direct initialization
    // suppressing implicit conventions by using explicit keyword
    // explicit SalesData(const std::string &s): bookNo(s){}




    SalesData(std::string s = ""): bookNo(s){}

    // Delegating constructors
    // A delegating constructor uses another constructor from its own class to perform its initialization
    SalesData():SalesData("hello") {}
    // const modifies that this type to const SalesData *const
    // indicate this const pointer point to a const object
    // indicate this is a pointer to const
    // called const member functions
    std::string isbn() const
    {
        // return bookNo;
        // this is a const pointer to current instance
        return this->bookNo;
    }

    // equals to this
    //    std::string isbn(const SalesData *const this)
    //    {
    //        return this->bookNo;
    //    }

    SalesData &combine(const SalesData &);

    std::istream &read(std::istream & is, SalesData &item);

    double averagePrice() const;

    // data members
    unsigned unitsSold = 0;
    double revenue = 0.0;
    std::string bookNo;

  public:
    const std::string &getBookNo() const;
};

#endif // DATA_STRUCTURE_SCRATCHES_SRC_STRUCTCLASS_H
