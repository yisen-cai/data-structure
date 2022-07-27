#include "double_linked_list.h"
#include "gtest/gtest.h"
#include "linked_list.h"
//#include "hello.h"

TEST(TestLinkedList, insert) {
  Node *head = nullptr;
  Node *second = nullptr;
  Node *third = nullptr;

  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = nullptr;

  Node *node = head;
  for (size_t i = 0; i < 3; i++) {
    ASSERT_EQ(i + 1, node->data);
    node = node->next;
  }
  printList(head);
}

TEST(TestLinkedList, append) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }
  Node *no = head;
  for (size_t i = 0; i < 10; i++) {
    ASSERT_EQ(i, no->data);
    no = no->next;
  }
}

TEST(TestLinkedList, pushNode) {
  Node *head = nullptr;
  for (size_t i = 0; i < 20; i++) {
    Node::push(&head, i);
  }

  Node *no = head;

  for (size_t i = 19; i >= 0 && no != nullptr; i--) {
    ASSERT_EQ(i, no->data);
    no = no->next;
  }
}

TEST(TestLinkedList, deleteNode) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }

  // delete first
  Node::deleteNode(&head, 0);
  ASSERT_EQ(1, head->data);

  // delete second
  Node::deleteNode(&head, 2);
  ASSERT_EQ(3, head->next->data);
}

TEST(TestLinkedList, deleteByPosition) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }
  std::cout << "delete first" << std::endl;
  Node::deleteNodeByPosition(&head, 0);
  ASSERT_EQ(1, head->data);

  std::cout << "delete middle" << std::endl;
  printList(head);
  Node::deleteNodeByPosition(&head, 4);
  printList(head);

  std::cout << "delete last" << std::endl;
  printList(head);
  Node::deleteNodeByPosition(&head, 7);
  printList(head);
}

TEST(TestLinkedList, deleteAllNode) {
  Node *head = nullptr;
  for (size_t i = 0; i < 20; i++) {
    Node::append(&head, i);
  }
  printList(head);
  Node::deleteAllNode(&head);
  std::cout << "after delete" << std::endl;
  printList(head);
}

TEST(TestLinkedList, search) {
  Node *head = nullptr;
  for (size_t i = 0; i < 20; i++) {
    Node::append(&head, i);
  }
  ASSERT_TRUE(Node::search(head, 10));
  ASSERT_FALSE(Node::search(head, 100));
}

TEST(TestLinkedList, getNthNode) {
  Node *head = nullptr;
  for (size_t i = 0; i < 20; i++) {
    Node::append(&head, i);
  }
  ASSERT_EQ(10, Node::getNthNode(head, 10));
}

TEST(TestLinkedList, reverseV1) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }
  printList(head);
  Node::reverseV1(&head);
  printList(head);
  Node *no = head;
  for (size_t i = 9; i >= 0 && no != nullptr; i--) {
    ASSERT_EQ(i, no->data);
    no = no->next;
  }
}

TEST(TestLinkedList, reverse) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }
  Node::reverseIteratively(&head);
  Node *no = head;
  for (size_t i = 9; i >= 0 && no != nullptr; i--) {
    ASSERT_EQ(i, no->data);
    no = no->next;
  }
}

TEST(TestLinkedList, reverseRecurisively) {
  Node *head = nullptr;
  for (size_t i = 0; i < 10; i++) {
    Node::append(&head, i);
  }
  Node::reverseRecursively(head);
  printList(head);
}
