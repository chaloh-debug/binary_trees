#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree || !tree->parent)
		return (depth);
	depth = binary_tree_depth(tree->parent);
	return (1 + depth);
}
