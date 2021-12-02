#include "binary_trees.h"

/**
*binary_tree_sibling -  find the sibling of a node
*@node: Pointer to the node to find the sibling
*Return: a pointer to the sibling node, or NULL on failure
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
