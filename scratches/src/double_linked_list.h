//
// Created by 蔡宜身 on 2020/12/14.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_DOUBLE_LINKED_LIST_H
#define DATA_STRUCTURE_SCRATCHES_SRC_DOUBLE_LINKED_LIST_H

template <class T> class DoubleLinkedList
{
    T data;

  public:
#endif

    DoubleLinkedList *prev;
    DoubleLinkedList *next;
    DoubleLinkedList(T Data) : data(Data), prev(nullptr), next(nullptr)
    {
    }

};
