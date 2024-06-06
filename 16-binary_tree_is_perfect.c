#include "binary_trees.h"

/**
* perfect_tree - func that says perfect if left and right are equal
* and every node has 2 nodes or none
* @tree: tree to check
* Return: 0 if is not a perfect
*/

int perfect_tree(const binary_tree_t *tree)
{
	int k = 0, r = 0;

	if (tree->left && tree->right)
	{
		k = 1 + perfect_tree(tree->left);
		r = 1 + perfect_tree(tree->right);
		if (r == k && r != 0 && k != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* binary_tree_is_perfect - perfect tree or no tree
* @tree: tree to chect
* Return: 1 if it is 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = perfect_tree(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
