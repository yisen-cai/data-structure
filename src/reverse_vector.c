#include "reverse_vector.h"

#include <stdlib.h>

char *reverse_vector(char *str, int len, int i) {
  int count = 0;
  // remember in mind that's stop
  while (count < i) {
    int t = *(str + count);
    int k = 0;
    // another
    while ((k + count + i) <= (len - 1)) {
      *(str + k + count) = *(str + k + count + i);
      k += i;
    }
    *(str + k + count) = t;
    count++;
  }
  return str;
}

char *reverse(char *str, int i, int j) {
  // 涉及到字符串复制
  char *new = malloc(sizeof(char) * (j - i));
  for (int k = j; k > i; k--) {
    *(new + j - k) = *(str + k);
  }
  return new;
}