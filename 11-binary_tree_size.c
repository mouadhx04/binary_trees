#include "binary_trees.h"

/**
 * binary_tree_size - size of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
