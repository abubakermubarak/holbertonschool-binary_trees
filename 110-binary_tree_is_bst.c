#include "binary_trees.h"
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (!tree || tree->lef->n > tree->n || tree->right->n < tree->n)
    {
        return (0);
    }
    if (tree->left->n < tree->n && tree->right->n < tree->n)
    {
        return (1);
    }

}