#include "binary_trees.h"

/**
 *binary_tree_node - function to create a binary tree
 *@parent: parent node
 *@value: node data
 *Return: new node pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
