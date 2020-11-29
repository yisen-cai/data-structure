#include "kmp_algorithm.h"
#include <stdlib.h>

/**
 * 求next子数组
 * 1.Pj = Pk, next[j+1] = next[j] + 1
 * 2.Pj !=Pk, Pj = P(next[..next[k]]), next[j+1] = k' + 1
 * 3.next[j+1] = 1
 */
void get_next(char *t, int *next, int len)
{
    int j = 0, k = -1;
    *next = -1;
    while (j < len)
    {
        if (k == -1 || *(t + j) == *(t + k))
        {
            ++k;
            ++j;
            *(next + j) = k; // Pi == Pj, next[j + 1] = next[k] + 1
        }
        else
        {
            k = *(next + k); // k = next[k] - 1, 循环继续
        }
    }
}

/**
 * 优化过next数组求法, 去除aaaab这样出现重复next[j] = next[j]情况
 */
void get_next_val(char *t, int *nextval, int len)
{
    int j = 0, k = -1;
    *next = -1;
    while (j < len)
    {
        if (k == -1 || *(t + j) == *(t + k))
        {
            ++k;
            ++j;
            if(*(next + j)!= *(next + k))
                *(next + j) = k;
            else
                *(next + j) = *(next + k);
        }
        else
        {
            k = *(next + k); // k = next[k] - 1, 循环继续
        }
    }
}

/**
 * 暴力匹配法
 * 发生不匹配即退回到上次匹配的下一个继续匹配
 */
int index_force(char *s, int s_len, char *t, int t_len)
{
    int i = 0, j = 0;
    while (i < s_len && j < t_len)
    {
        if (*(s + i) == *(t + j))
        {
            i++;
            j++;
        }
        else
        {
            // 不匹配情况, 进行回溯
            i = i - j + 1; // +1是回溯到上次匹配的下一个
            j = 0;
        }
    }
    // j遍历到字符串尾了
    if (j == t_len)
        return i - t_len;
    return 0;
}

/**
 * KMP匹配算法
 */
int index_kmp(char *s, int s_len, char *t, int t_len, int *next)
{
    int i = 0, j = 0;
    while (i < s_len && j < t_len)
    {
        // j = -1从头开始
        if(j == -1 || *(s + i) == *(t + j))
        {
            i++;
            j++;
        }
        else
        {
            // 否则跳转到next[j], 重新匹配
            j = next[j];
        }
    }
    if(j == t_len)
        return i - t_len;
    return 0;
}