#include "binary_trees.h"
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL)
    {
        return (NULL);
    }
    return binary_tree_sibling(node->parent);
}