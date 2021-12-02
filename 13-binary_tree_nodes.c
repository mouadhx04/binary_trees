#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);
	if (!tree->left)
		return (binary_tree_nodes(tree->right) + 1);
	if (!tree->right)
		return (binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
