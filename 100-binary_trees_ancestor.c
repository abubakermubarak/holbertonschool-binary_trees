#include "binary_trees.h"
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    size_t first_depth;
    size_t second_depth;
    first_depth = binary_tree_depth(first);
    second_depth = binary_tree_depth(second);
    if (first == NULL || second == NULL)
    {
        return (NULL);
    }
    if (first->parent == second->parent)
    {
        return(first->parent);
    }
    if (first_depth == second_depth)
    {
        return (binary_trees_ancestor(first_depth->parent, second_depth->parent));
    }
    if (first_depth > second_depth)
    {
        return (binary_trees_ancestor(first_depth->parent, second_depth));
    }
    return (binary_trees_ancestor(first_depth, second_depth->parent));
    
}