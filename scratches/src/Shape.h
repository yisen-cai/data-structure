//
// Created by 蔡宜身 on 2020/12/1.
//

#ifndef DATA_STRUCTURE_SHAPE_H
#define DATA_STRUCTURE_SHAPE_H

class Shape {
 protected:
  int width, height;

 public:
  Shape(int width, int height);

  // called pure virtual function
  // it may be redefined in a derived class to suit the objects of that class
  // no need to implement
  //    virtual int area1() = 0;

  // using virtual make inherited class method can overwrite this parent
  virtual int area();
};

class Rectangle : public Shape {
 public:
  Rectangle(int width = 0, int height = 0);
  int area();
};

class Triangle : public Shape {
 public:
  Triangle(int width = 0, int height = 0);
  int area();
};

#endif  // DATA_STRUCTURE_SHAPE_H
