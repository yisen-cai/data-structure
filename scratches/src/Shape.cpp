//
// Created by 蔡宜身 on 2020/12/1.
//

#include "Shape.h"
#include <iostream>

Shape::Shape(int width, int height) : width(width), height(height)
{
}

int Shape::area()
{
    std::cout << "Parent class area: " << std::endl;
    return 0;
}

Rectangle::Rectangle(int width, int height) : Shape(width, height)
{
}

int Rectangle::area()
{
    std::cout << "Rectangle class area: " << width * height << std::endl;
    return width * height;
}

Triangle::Triangle(int width, int height) : Shape(width, height)
{
}

int Triangle::area()
{
    std::cout << "Triangle class area: " << (width * height) / 2 << std::endl;
    return (width * height) / 2;
}
