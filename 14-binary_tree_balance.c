#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Binary tree node
 * @tree: node
 * Return: the code
 */

int binary_tree_balance(const binary_tree_t *tree)
{

int left_h = 0;
int right_h = 0;

if (tree == NULL)
{
return (0);
}

left_h = (int)tree_height(tree->left);
right_h = (int)tree_height(tree->right);

return (left_h - right_h);
}
