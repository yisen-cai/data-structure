#ifndef STACK_CLASS_H
#define STACK_CLASS_H
#include <iostream>

/**
 * array stack
 */
template <class T> class Stack
{
    int top;
    int size;
    T *data;

  public:
    Stack();
    explicit Stack(int s_size);
    void push(T x);
    T pop();
    T peek();
    bool isFull();
    bool isEmpty();
    void printStack();
};

template <class T> Stack<T>::Stack() : top(-1), size(10)
{
    data = new T[10];
}

template <class T> Stack<T>::Stack(int s_size) : top(-1), size(s_size)
{
    data = new T[s_size];
}

template <class T> void Stack<T>::push(T x)
{
    // can't add element
    if (isFull())
        return;
    data[++top] = x;
}

template <class T> T Stack<T>::pop()
{
    if (!isEmpty())
        return data[top--];
    // no element
    return T(0);
}

template <class T> T Stack<T>::peek()
{
    return data[top];
}

template <class T> bool Stack<T>::isFull()
{
    return top >= size;
}

template <class T> bool Stack<T>::isEmpty()
{
    return top < 0;
}

template <class T> inline void Stack<T>::printStack()
{
    for (int i = size - 1; i > 0; --i)
    {
        std::cout << data[i] << "," << std::endl;
    }
}
#endif // !STACK_CLASS_H
