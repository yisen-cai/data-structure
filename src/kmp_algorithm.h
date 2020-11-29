#ifndef KMP_ALGORITHM_H
#define KMP_ALGORITHM_H


void get_next(char *t, int *next, int len);

void get_next_val(char *t, int *next, int len);

int index_kmp(char *s, int s_len, char *t, int t_len, int *next);

int index_force(char *s, int s_len, char *t, int t_len);

#endif /* KMP_ALGORITHM_H */
