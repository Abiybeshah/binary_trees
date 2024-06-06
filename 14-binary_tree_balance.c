#include "binary_trees.h"

/**
* binary_tree_height_balance - measures height of binary tree
* @tree: tree to check
* Return: the height
*/

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t k = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		k = tree->left ? 1 + binary_tree_height_balance(tree->left) :  1;
		r = tree->left ? 1 + binary_tree_height_balance(tree->right) :  1;


	}
	return ((k > r) ? k : r);
}

/**
* binary_tree_balance - measures balance of a binary tree
* @tree: tree to check
* Return: balanced factor
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_balance(tree->left));
		right = ((int)binary_tree_height_balance(tree->right));
		total = left - right;
	}
	return (total);
}
