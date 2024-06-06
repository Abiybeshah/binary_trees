#include "binary_trees.h"

/**
* binary_tree_sibling - function thet finds if a node is sibling
* @nodeL node to check
* Return: the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}