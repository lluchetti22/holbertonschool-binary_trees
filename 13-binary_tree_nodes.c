#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Binary tree node
 * @tree: node
 * Return: the code
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left != NULL || tree->right != NULL)
{
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

return (0);
}
