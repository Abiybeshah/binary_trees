#include "binary_trees.h"

/**
* binary_tree_leaves - function thet returns the num of leaves
* @tree: tree to check
* Return: num of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, k = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		k = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = k + r;
		return ((!k && !r) ? leaf + 1 : leaf + 0);
	}
}
