//
// Created by 蔡宜身 on 2020/12/1.
//

#ifndef DATA_STRUCTURE_BOX_H
#define DATA_STRUCTURE_BOX_H

class Box {
 protected:
  double length;
  double breadth;
  double height;
  double width;

 public:
  // Can't be initialized inside class
  static int objectCount;

  // Constructor
  Box(double length, double breadth, double height);

  Box(const Box &Box);

  // destructor
  ~Box();

  Box operator+(const Box &b);

  double Volume();

  static int getCount();
};

class SmallBox : Box {
 public:
  void setSmallWidth(double wid);
  double getSmallWidth();
};

#endif  // DATA_STRUCTURE_BOX_H
