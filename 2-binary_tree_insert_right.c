#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: A pointer to the parent of the node to create
 * @value: The value to put in the new node
 * Return: If an error occurs - NULL else  pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	return (new_node);
}
