#include "binary_trees.h"

/**
 * height - height of a binary tree.
 *
 * @tree: pointer to root.
 *
 * Return: height.
 */

int height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
/**
 * balanced - balance factor of a tree.
 *
 * @tree: pointer to root node
 *
 * Return: balance factor.
 */

int balanced(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = height(tree->left) - height(tree->right);
	return (balance);
}

/**
 * full - check if a binary tree is full.
 *
 * @tree: pointer to the root node
 *
 * Return: 1 if full, 0 if not.
 */

int full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (full(tree->left) && full(tree->right));
	if (tree->left && !tree->right)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	return (0);
}

/**
 * binary_tree_is_perfect - check if a tree is perfect
 *
 * @tree: pointer to root node
 *
 * Return: 1 if perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (full(tree) && !balanced(tree))
	{
		binary_tree_is_perfect(tree->right);
		binary_tree_is_perfect(tree->left);
		return (1);
	}
	return (0);
}
