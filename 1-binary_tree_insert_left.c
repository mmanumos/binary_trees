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
	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = node;
		return (node);
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
