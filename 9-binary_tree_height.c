#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary
* tree
* @tree: tree to go check
* Return: the height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t k = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (true)
		{
			k = tree->left ? k + binary_tree_height(tree->left) : 0;
			r = tree->right ? k + binary_tree_height(tree->right) : 0;
		}
		return ((k > r) ? k : r);
	}
}
