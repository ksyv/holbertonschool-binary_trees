#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: if node or parents is NULL return 0
 * If node has no sibling return 0, otherwise return the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}
