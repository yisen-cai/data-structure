//
// Created by 蔡宜身 on 2020/12/16.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_BTREE_H
#define DATA_STRUCTURE_SCRATCHES_SRC_BTREE_H

template <class T>
class BNode {
 public:
  T data;
  BNode<T> *lChild;
  BNode<T> *rChild;
};

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_BTREE_H
