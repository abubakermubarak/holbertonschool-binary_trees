#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t right;
    size_t left;
    if (tree == NULL)
    {
        return (0);
    }
    if (tree->right == NULL && tree->left == NULL)
    {
        return (0);
    }
    right =  1 + binary_tree_height(tree->right);
    left = 1 + binary_tree_height(tree->left);
    if (right > left)
    {
        return(right);
    }
    return(left);
}