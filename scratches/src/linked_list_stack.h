#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

template <class T> class Node;

template <class T> class LinkedListStack
{
    Node<T> *head;

  public:
    LinkedListStack() : head(nullptr)
    {
    }
    void push(T value);
    T pop();
    bool isEmpty();
};

template <class T> inline void LinkedListStack<T>::push(T value)
{
    if (isEmpty())
    {
        Node<T> *new_node = new Node<T>();
        new_node->data = value;
        head = new_node;
    }
    else
    {
        Node<T> *new_node = new Node<T>();
        new_node->data = value;
        new_node->next = head;
        head = new_node;
    }
}

template <class T> inline T LinkedListStack<T>::pop()
{
    if (!isEmpty())
    {
        T result = head->data;
        Node<T> *curr = head;
        head = head->next;
        delete curr;
        return result;
    }
}
template <class T> bool LinkedListStack<T>::isEmpty()
{
    return head == nullptr;
}

template <class T> class Node
{
    T data;
    Node<T> *next;

  public:
    friend void LinkedListStack<T>::push(T value);
    friend T LinkedListStack<T>::pop();
    Node() : next(nullptr)
    {
    }
};

#endif // !LINKED_LIST_STACK_H