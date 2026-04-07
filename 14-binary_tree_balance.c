#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_height - Binary tree node
 * @tree: node
 * Return: the code
 */

size_t tree_height(const binary_tree_t *tree)
{

size_t left_h = 0;
size_t right_h = 0;

if (tree == NULL)
{
return (0);
}

left_h = tree_height(tree->left);
right_h = tree_height(tree->right);

if (left_h > right_h)
{
return (left_h + 1);
}

return (right_h + 1);
}


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
