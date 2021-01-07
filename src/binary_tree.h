#ifndef E3CEE3FC_8B28_4942_A6A1_458F045C257E
#define E3CEE3FC_8B28_4942_A6A1_458F045C257E

typedef struct BNode
{
    struct BNode *lchild;
    struct BNode *rchild;
    int data;
} BTree;

typedef struct ThreadNode
{
    struct ThreadNode *lchild, *rchild;
    int data;
    int ltag, rtag;
} ThreadNode;

void pre_order_access_recursively(BNode *base);

void in_order_access_recursively(BNode *base);

void post_order_access_recursively(BNode *base);

void pre_order_access_with_loop(BNode *base);

void in_order_access_with_loop(BNode *base);

void post_order_access_with_loop(BNode *base);

void level_order(BNode *base);

void in_thread(ThreadNode *p, ThreadNode *pre);

#endif /* E3CEE3FC_8B28_4942_A6A1_458F045C257E */
