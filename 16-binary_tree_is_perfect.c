#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = binary_tree_balance(tree);
	int left, right;

	if (tree == NULL)
		return (0);
	if (balance == 0)
	{
		left = binary_tree_balance(tree->left);
		right = binary_tree_balance(tree->right);
		if (left == 0 && right == 0)
			return (1);
	}
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the node to measure the depth
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
/**
 * binary_tree_height - mesure the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		height = left;
	else
		height = right;
	return (1 + height);
}
