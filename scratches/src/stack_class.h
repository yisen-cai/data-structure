#ifndef STACK_CLASS_H
#define STACK_CLASS_H
#include <iostream>

/**
 * array stack
 */
template <class T>
class Stack {
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
  void reverse();
  void insertAtBottom(T x);
};

template <class T>
Stack<T>::Stack() : top(-1), size(10) {
  data = new T[10];
}

template <class T>
Stack<T>::Stack(int s_size) : top(-1), size(s_size) {
  data = new T[s_size];
}

template <class T>
void Stack<T>::push(T x) {
  // can't add element
  if (isFull()) return;
  data[++top] = x;
}

template <class T>
T Stack<T>::pop() {
  if (!isEmpty()) return data[top--];
  // no element
  return T(0);
}

template <class T>
T Stack<T>::peek() {
  return data[top];
}

template <class T>
bool Stack<T>::isFull() {
  return top >= size;
}

template <class T>
bool Stack<T>::isEmpty() {
  return top < 0;
}

template <class T>
inline void Stack<T>::printStack() {
  for (int i = size - 1; i > 0; --i) {
    std::cout << data[i] << "," << std::endl;
  }
}

// double recurse
template <class T>
void Stack<T>::reverse() {
  if (!isEmpty()) {
    // save the temporary pop，save result to function reverse call stack
    T x = pop();
    reverse();
    insertAtBottom(x);
  }
}

// as the name, insert at bottom location
template <class T>
void Stack<T>::insertAtBottom(T x) {
  if (isEmpty()) {
    push(x);
  } else {
    // if stack is not empty, recursively pop all then push the first element.
    // think about domino effect, 触到边界条件向上回溯
    T a = pop();
    insertAtBottom(x);
    push(a);
  }
}
#endif  // !STACK_CLASS_H
