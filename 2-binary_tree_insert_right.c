#include "binary_trees.h"

/**
 *binary_tree_insert_right - funtion to insert node as right child
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
