//
// Created by 蔡宜身 on 2020/12/4.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_ACCOUNT_H
#define DATA_STRUCTURE_SCRATCHES_SRC_ACCOUNT_H
#include <string>

class Account {
 public:
  void calculate() { amount += amount * interestRate; }

  static double rate() { return interestRate; }

  static void rate(double rate);

 private:
  std::string owner;
  double amount;

  // period is a constant expression
  // initialize of static members inside class
  // it's a declaration
  // better choice is there better have a definition without initializer
  static constexpr int period = 30;

  static double interestRate;
  static double initRate();
};

class Bar {
 public:
 private:
  // ok, static member can have incomplete type
  static Bar mem1;

  // ok, pointer member can have incomplete type
  Bar *mem2;

  // error, data members must have complete type
  // Bar mem3;
};

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_ACCOUNT_H
