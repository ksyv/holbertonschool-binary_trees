#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

		newNode = malloc(sizeof(binary_tree_t));
		if (newNode == NULL || parent == NULL)
			return (NULL);
		if (parent->right != NULL)
		{
			newNode->right = parent->right;
		}
		else
		{
			newNode->right = NULL;
		}
		parent->right = newNode;
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;

	return (newNode);
}
