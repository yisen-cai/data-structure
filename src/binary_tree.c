#include "binary_tree.h"

#include <stdio.h>

#include "stack.h"

void pre_order_access_recursively(BNode *base) {
  printf("%d, ", base->data);
  pre_order_access_recursively(base->lchild);
  pre_order_access_recursively(base->rchild);
}

void in_order_access_recursively(BNode *base) {
  in_order_access_recursively(base->lchild);
  printf("%d, ", base->data);
  in_order_access_recursively(base->rchild);
}

void post_order_access_recursively(BNode *base) {
  post_order_access_recursively(base->lchild);
  post_order_access_recursively(base->rchild);
  printf("%d, ", base->data);
}

void pre_order_access_with_loop(BNode *base) {
  Stack *s = init_stack(20);
  BNode *p = base;
  while (p || is_empty(s)) {
    if (p) {
      printf("%d, ", p->data);
      push(s, p);
      p = p->lchild;
    } else {
      p = pop(s);
      p = p->rchild;
    }
  }
}

void in_order_access_with_loop(BNode *base) {
  Stack *s = init_stack(20);
  BNode *p = base;
  while (p || is_empty(s)) {
    if (p) {
      push(s, p);
      p = p->lchild;
    } else {
      p = pop(s);
      printf("%d, ", p->data);
      p = p->rchild;
    }
  }
}

/**
 * 难点
 */
void post_order_access_with_loop(BNode *base) {}

void level_order(BNode *base) {}

void in_thread(ThreadNode *p, ThreadNode *pre) {
  if (p != NULL) {
    in_thread(p->lchild, pre);
    if (p->lchild != NULL) {
      p->lchild = pre;
      p->ltag = 1;
    }
    if (pre != NULL && pre->rchild == NULL) {
      pre->rchild = p;
      pre->rtag = 1;
    }
    pre = p;
    in_thread(p->rchild, pre);
  }
}