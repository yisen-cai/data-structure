
#include "linked_list.h"
#include <iostream>

/**
 * Given a head node then print allow its element.
 */
void printList(Node *head)
{
    while (head != nullptr)
    {
        std::cout << head->data << ",";
        head = head->next;
    }
    std::cout << std::endl;
}

/**
 * Using clike to implement Generic LinkedList
 */
void push(GenericNode **head, void *new_data, int data_size)
{
    // Allocate memory for noe
    GenericNode *new_node = (GenericNode *)malloc(sizeof(GenericNode));
    new_node->data = malloc(data_size);
    new_node->next = (*head);

    // Copy contents of new_data to newly allocated memory
    // Assumption: char takes 1 byte.
    // for (size_t i = 0; i < data_size; i++)
    // {
    //     *(char *)(new_node->data + i) = *(char *)(new_data + 1);
    // }

    // Change head pointer as new node
    (*head) = new_node;
}

void Node::push(Node **head, int new_data)
{
    // 1.
    Node *new_node = new Node();

    // 2.
    new_node->data = new_data;

    // 3.
    new_node->next = *head;

    // 4.
    *head = new_node;
}

void Node::pushNode(Node **head, Node *new_node)
{

    if (new_node != nullptr)
    {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    std::cout << "new node can't be null" << std::endl;
}

void Node::insertAfter(Node *prev_node, int new_data)
{
    // 1. Check if the given node is null
    if (prev_node != nullptr)
    {
        std::cout << "the given previous node cannot be null" << std::endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void Node::append(Node **head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    // verify whether the head is null
    if (*head == nullptr)
    {
        *head = new_node;
        return;
    }

    Node *last = *head;

    // find the last node
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = new_node;
}

/**
 * Given a data, find the element and delete it.
 */
void Node::deleteNode(Node **head, int aim_data)
{
    if (*head == nullptr)
    {
        std::cout << "empty node to delete" << std::endl;
        return;
    }

    Node *prev = nullptr;
    Node *aim = *head;

    // if head node holds the data
    if (aim != nullptr && aim->data == aim_data)
    {
        *head = aim->next;
        delete aim;
        return;
    }

    while (aim != nullptr && aim->data != aim_data)
    {
        prev = aim;
        aim = aim->next;
    }

    // find element
    if (aim != nullptr)
    {
        prev->next = aim->next;
        delete aim;
    }
}

void Node::deleteNodeByPosition(Node **head, int position)
{
    Node *prev = nullptr;
    Node *no = *head;
    int current_position = 0;

    // head element
    if (*head != nullptr && current_position == position)
    {
        *head = (*head)->next;
        delete no;
        return;
    }

    // find element
    while (no != nullptr && current_position != position)
    {
        prev = no;
        no = no->next;
        current_position += 1;
    }

    // find out
    if (no != nullptr)
    {
        prev->next = no->next;
        delete no;
        return;
    }
}

void Node::deleteAllNode(Node **head)
{
    Node *prev = nullptr;
    Node *no = *head;
    while (no != nullptr)
    {
        prev = no;
        no = no->next;
        delete prev;
    }
    *head = nullptr;
}

int Node::length(Node *head)
{
    int count = 0;
    while (head != nullptr)
    {
        head = head->next;
        count++;
    }
    return count;
}

bool Node::search(Node *head, int key)
{
    while (head != nullptr && head->data != key)
    {
        head = head->next;
    }
    return head != nullptr;
}

int Node::getNthNode(Node *head, int n)
{
    if (n < 0)
    {
        std::cout << "n is less than 0" << std::endl;
        return -1;
    }

    for (size_t i = 0; i < n && head != nullptr; i++)
    {
        head = head->next;
    }

    // didn't find out
    if (head == nullptr)
    {
        std::cout << "n is bigger than length" << std::endl;
        return -1;
    }

    return head->data;
}

void Node::reverseV1(Node **head)
{
    Node *new_head = nullptr;
    Node *no = *head;

    while (no != nullptr)
    {
        Node *next = no->next;
        Node::pushNode(&new_head, no);
        no = next;
    }
    *head = new_head;
}

void Node::reverseIteratively(Node **head)
{
    Node *curr = *head;
    Node *next = nullptr, *prev = nullptr;
    while (curr != nullptr)
    {
        // next
        next = curr->next;

        // pointer arrow back
        curr->next = prev;

        // move to next
        prev = curr;
        curr = next;
    }
    *head = prev;
}

/**
 * 1) Divide the list in two parts(first node and rest of the linked list)
 * 2) Call reverse for the rest of the linked list
 * 3) Link rest to first
 * 4) Fix head pointer
 */
Node *Node::reverseRecursively(Node *head)
{
    // recursive end condition
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    // call recursively, when rest elements exchanged
    // its order should be 8<->9, 7<->8
    // 7->next->next = 7, 7->next = null(7<->8)
    Node *rest = reverseRecursively(head->next);
    // then call this
    head->next->next = head;
    head->next = nullptr;
    return rest;
}

/**
 * Mainly calls reverseUtil() with prev as NULL
 */
void Node::reverseSimpleRecursive(Node **head)
{
    if (!head)
        return;
    reverseUtil(*head, nullptr, head);
}

void Node::reverseUtil(Node *curr, Node *prev, Node **head)
{
    // if last node mark it head
    // (0, 9), 8<->9, 9 is marked head
    if (curr->next != nullptr)
    {
        *head = curr;
        curr->next = prev;
        return;
    }

    Node *next = curr->next;
    curr->next = prev;
    reverseUtil(next, curr, head);
}
