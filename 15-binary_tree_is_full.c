#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full.
 *
 * @tree: pointer to the root node
 *
 * Return: 1 if full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (tree->left && !tree->right)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	return (0);
}
