//
// Created by 蔡宜身 on 2020/12/3.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_SCREEN_H
#define DATA_STRUCTURE_SCRATCHES_SRC_SCREEN_H
#include <string>

#include "WindowManager.h"

class Screen {
 public:
  using pos = std::string::size_type;
  //    typedef std::string::size_type pos;

  Screen() = default;

  Screen(pos Height, pos Width, char c);
  Screen(pos h, pos w);
  friend class WindowManager;
  friend void WindowManager::clear(unsigned long index);

  // Classes often have small functions that can benefit from being inlined.
  // member functions defined inside the class are automatically inline
  char get() const;

  inline char get(pos ht, pos wd) const;

  void increAccessCtr() const;

  Screen &move(pos r, pos c);

  Screen &set(char c);

  Screen &set(pos r, pos col, char c);

  Screen &display(std::ostream &os);

  const Screen &display(std::ostream &os) const;

 private:
  pos cursor = 0;
  // may change even in a const object
  mutable pos accessCtr;
  pos height = 0, width = 0;
  std::string contents;
};

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_SCREEN_H
