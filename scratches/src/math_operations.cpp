//
// Created by 蔡宜身 on 2020/12/1.
//
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

void test() {
  /**
   * cos
   * sin
   * tan
   * log
   * pow
   * ...
   */
  // set the seed
  // srand((unsigned)time(NULL));

  // generate 10 random numbers
  for (int i = 0; i < 10; ++i) {
    int j = rand();
    cout << "Random Number:" << j << endl;
  }
}
