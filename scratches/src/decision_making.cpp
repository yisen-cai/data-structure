//
// Created by 蔡宜身 on 2020/12/1.
//
#include "decision_making.h"

#include <iostream>

void switchExample(char grade) {
  switch (grade) {
    case 'A':
      std::cout << "Excellent" << std::endl;
      break;
    case 'B':
    case 'C':
      std::cout << "Well done" << std::endl;
      break;
    case 'F':
      std::cout << "Better try again" << std::endl;
      break;
    default:
      std::cout << "Invalid grade" << std::endl;
  }
}
