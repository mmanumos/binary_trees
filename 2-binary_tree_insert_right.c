#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 *
 * @parent: parent node.
 * @value: value -> n
 * Return: Node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);


	if (parent == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
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
