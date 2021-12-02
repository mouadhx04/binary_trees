#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: a pointer to the root node
 * Return: the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_left >= h_right)
		return (h_left + 1);
	return (h_right + 1);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node 
 * Return: 1 when binary tree is perfect, Otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
