#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	right_height = binary_tree_height(tree->right) + 1;
	left_height = binary_tree_height(tree->left) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
