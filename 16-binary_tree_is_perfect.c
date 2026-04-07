#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_stats - Binary tree node
 * @tree: node
 * @height: int
 * @size: int
 * Return: the code
 */

int tree_stats(const binary_tree_t *tree, int *height, int *size)
{
int h_left = 0, h_right = 0;
int s_left = 0, s_right = 0;

if (tree == NULL)
{
*height = 0;
*size = 0;
return;
}

tree_stats(tree->left, &h_left, &s_left);
tree_stats(tree->right, &h_right, &s_right);

*height = (h_left > h_right ? h_left : h_right) + 1;
*size = s_left + s_right + 1;
}

/**
 * binary_tree_is_perfect - Binary tree node
 * @tree: node
 * Return: the code
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height = 0, size = 0;
int perfect = 1;
int i;

if (tree == NULL)
{
return (0);
}

tree_stats(tree, &height, &size);

for(i = 0; i < height; i++)
{
perfect *= 2;
}

perfect -= 1;

return (size == perfect);
}
