#ifndef STACK_H
#define STACK_H
#include "binary_tree.h"
#include <stdbool.h>

#define VALUE_TYPE BNode *

typedef struct Stack
{
    VALUE_TYPE *values;
    int top;
    int size;
} Stack;

Stack *init_stack(int size);

void push(Stack *s, VALUE_TYPE value);

VALUE_TYPE pop(Stack *s);

bool is_empty(Stack *s);

void print_stack_contents(Stack s);

#endif
