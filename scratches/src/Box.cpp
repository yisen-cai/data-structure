//
// Created by 蔡宜身 on 2020/12/1.
//

#include "Box.h"

#include <iostream>

Box::Box(double length, double breadth, double height)
    : length(length), breadth(breadth), height(height) {
  // Increase every time object is created
  objectCount++;
}

// Initialize static member of class Box
int Box::objectCount = 0;
double Box::Volume() { return length * breadth * height; }
int Box::getCount() {
  // Can only access static member
  // Can only invoke by class name with::
  // Do not have the this pointer of the class instance.
  return objectCount;
}
Box::~Box() { std::cout << "destructed..." << std::endl; }

// Copy constructor
Box::Box(const Box& Box) {
  std::cout << "Copy constructor allocating prt." << std::endl;
}
Box Box::operator+(const Box& b) {
  Box box = Box(0, 0, 0);
  box.length = this->length + b.length;
  box.breadth = this->breadth + b.breadth;
  box.height = this->height + b.height;
  return box;
}

void SmallBox::setSmallWidth(double wid) { width = wid; }
double SmallBox::getSmallWidth() { return width; }
