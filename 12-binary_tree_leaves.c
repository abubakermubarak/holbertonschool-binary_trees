#include "binary_trees.h"
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t counter;
    counter = 0;
    if (tree)
    {
        if (tree->right == NULL && tree->left == NULL)
        {
            counter++;
        }
        counter += binary_tree_leaves(tree->left);
        counter += binary_tree_leaves(tree->right);
    }
    return (counter);
}