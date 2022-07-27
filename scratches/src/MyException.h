//
// Created by 蔡宜身 on 2020/12/2.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_MYEXCEPTION_H
#define DATA_STRUCTURE_SCRATCHES_SRC_MYEXCEPTION_H
#include <exception>

class MyException : public std::exception {
 public:
  // const char *what() const _NOEXCEPT override;
};

struct StructException : public std::exception {
  // const char *what() const _NOEXCEPT override;
};

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_MYEXCEPTION_H
