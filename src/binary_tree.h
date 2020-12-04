#ifndef E3CEE3FC_8B28_4942_A6A1_458F045C257E
#define E3CEE3FC_8B28_4942_A6A1_458F045C257E

typedef struct BTree
{
    struct BTree *lchild;
    struct BTree *rchild;
    int data;
} BTree;

typedef struct ThreadNode
{
    struct ThreadNode *lchild, *rchild;
    int data;
    int ltag, rtag;
} ThreadNode;

void pre_order_access_recursively(BTree *base);

void in_order_access_recursively(BTree *base);

void post_order_access_recursively(BTree *base);

void pre_order_access_with_loop(BTree *base);

void in_order_access_with_loop(BTree *base);

void post_order_access_with_loop(BTree *base);

void level_order(BTree *base);

void in_thread(ThreadNode *p, ThreadNode *pre);

#endif /* E3CEE3FC_8B28_4942_A6A1_458F045C257E */
