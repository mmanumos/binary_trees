#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 *
 * @parent: parent node.
 * @value: value -> n
 * Return: Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
