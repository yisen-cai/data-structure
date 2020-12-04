#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

/**
 * Binary search loop implement
 */
int binary_search(int *arr, int size, int key);

/**
 * Binary search recursive implement
 */
int binary_search_recursively(int *arr, int left, int right, int key);

/**
 * Binary search in a rotate array
 */
int binary_search_in_rotate(int *arr, int left, int right, int key);

int print_hello();

#endif /* BINARY_SEARCH_H */
