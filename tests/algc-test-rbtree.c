#include <stdio.h>
#include "rbtree.h"

int main(int argc, char const *argv[])
{

    struct RBTree *tree = rbtree_new();

    for (int i = 1; i <= 10; i++)
    {
        rbtree_insert(i, tree);
        if (rbtree_check(tree))
        {
            printf("%d\n", i);
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        rbtree_remove(i, tree);
        if (rbtree_check(tree))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
