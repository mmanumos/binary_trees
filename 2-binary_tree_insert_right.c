#include "binary_trees.h"
/**
 * binary_tree_insert_right - C function to insert node to right side of tree
 * @parent: pointer to node addition
 * @value: value to be added
 * Return: return pointer to new node added
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node  = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = node;
		node->right = NULL;
	}
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	return (node);

}
