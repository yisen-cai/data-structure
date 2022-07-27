#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

#include "log.h"

Stack *init_stack(int size) {
  Stack *s = malloc(sizeof(Stack *));
  s->size = size;
  s->top = 0;
  s->values = malloc(sizeof(VALUE_TYPE) * s->size);
  return s;
}

bool is_empty(Stack *s) { return s->top == 0; }

void push(Stack *s, VALUE_TYPE value) {
  if (s->top < s->size) {
    s->values[s->top] = value;
    s->top++;
  }
  // TODO: overflow
}

VALUE_TYPE pop(Stack *s) {
  if (s->top >= 0) {
    return s->values[--s->top];
  }
  // TODO: underflow
  return 0;
}

void print_stack_contents(Stack s) {
  printf("Stack compacity is: %d\n", s.size);
  printf("Stack size is: %d\n", s.top);
  printf("Stack contents: \n");

  for (int i = 0; i < s.top; i++) {
    printf("Index %d is %d\n", i, s.values[i]);
  }
}