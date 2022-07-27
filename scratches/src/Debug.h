//
// Created by 蔡宜身 on 2020/12/4.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_DEBUG_H
#define DATA_STRUCTURE_SCRATCHES_SRC_DEBUG_H

class Debug {
 public:
  // A constexpr constructor must initialize every data member.
  // The initializers must ether use a constexpr constructor or be a constant
  // expression
  constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
  constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}

  constexpr bool any() const { return hw || io || other; }

  void set_io(bool b) { io = b; }

  void set_hw(bool b) { hw = b; }

  void set_other(bool b) { other = b; }

 private:
  bool hw;
  bool io;
  bool other;
};

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_DEBUG_H
