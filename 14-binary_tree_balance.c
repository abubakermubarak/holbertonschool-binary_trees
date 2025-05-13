#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    int right_depth;
    int left_depth;
    if (tree == NULL)
    {
        return (0);
    }
    right_depth = (int)binary_tree_height(tree->right);
    left_depth = (int)binary_tree_height(tree->left);
    return (left_depth - right_depth); 
}