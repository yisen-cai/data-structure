#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

class Node
{
  public:
    int data;
    Node *next;
    static void push(Node **head, int new_data);
    static void pushNode(Node **head, Node *new_node);
    static void insertAfter(Node *prev_node, int new_data);
    static void append(Node **head, int new_data);
    static void deleteNode(Node **head, int data);
    static void deleteNodeByPosition(Node **head, int position);
    static void deleteAllNode(Node **head);
    static int length(Node *head);
    static bool search(Node *head, int key);
    static int getNthNode(Node *head, int n);
    static void reverseV1(Node **head);
    static void reverseIteratively(Node **head);
    static Node *reverseRecursively(Node *head);
    static void reverseSimpleRecursive(Node **head);
    static void reverseUtil(Node *curr, Node *prev, Node **head);
};

void printList(Node *n);

typedef struct GenericNode
{
    void *data;
    GenericNode *next;
} GenericNode;

void push(GenericNode **head, void *new_data, int data_size);

#endif // __LINKED_LIST_H__