//
// Created by 蔡宜身 on 2020/12/4.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_CONSTREF_H
#define DATA_STRUCTURE_SCRATCHES_SRC_CONSTREF_H

class ConstRef
{
  public:
    ConstRef(int ii);

  private:
    // the initialization order depend on the order they are defined under the class
    // definition, not the constructor initializers order
    int i;
    const int ci;
    int &ri;
};

// const object, reference, and no default constructor object must initialized
// (): initializers, under the body is assigns
ConstRef::ConstRef(int ii) : ci(ii), ri(i) // those is initialization
{
    // assignment
    i = ii;
    // ci = ii;
    // ri = i;
}

class X
{
    int i;
    int j;

  public:
    X(int val);
};

X::X(int val) : i(val), j(val)
{
}

// it will cause an error, because i is initialized before j
// X::X(int val): j(val), i(val)
// {
// }

#endif // DATA_STRUCTURE_SCRATCHES_SRC_CONSTREF_H
