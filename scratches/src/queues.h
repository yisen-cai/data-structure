//
// Using two stack to implement Queue
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_QUEUES_H
#define DATA_STRUCTURE_SCRATCHES_SRC_QUEUES_H
#include "linked_list_stack.h"

template <class T> class QueueByStackWay1
{
    // top always point to oldest element, so dequeue is always pop from stack1
    LinkedListStack<T> stack1;
    // To put the element at top of stack1, stack2 is used.
    LinkedListStack<T> stack2;

  public:
    void enqueue(T element);
    T dequeue();
};

template <class T> void QueueByStackWay1<T>::enqueue(T element)
{
    while (!stack1.isEmpty())
    {
        stack2.push(stack1.pop());
    }
    stack1.push(element);
    while (!stack2.isEmpty())
    {
        stack1.push(stack2.pop());
    }
}

template <class T> T QueueByStackWay1<T>::dequeue()
{
    return stack1.pop();
}

template <class T> class QueueByStackWay2
{
    LinkedListStack<T> stack1;
    LinkedListStack<T> stack2;

  public:
    void enqueue(T data);
    T dequeue();
};
template <class T> void QueueByStackWay2<T>::enqueue(T data)
{
    stack1.push(data);
}
template <class T> T QueueByStackWay2<T>::dequeue()
{
    while (!stack1.isEmpty())
    {
        stack2.push(stack1.pop());
    }
    T result = stack2.pop();
    while (!stack2.isEmpty())
    {
        stack1.push(stack2.pop());
    }
    return result;
}

#endif // DATA_STRUCTURE_SCRATCHES_SRC_QUEUES_H
