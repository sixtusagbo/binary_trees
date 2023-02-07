#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 *
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		/* parent already has a right-child */
		node->right = parent->right;
		parent->right->parent = node;
	}

	/* parent has no right-child */
	parent->right = node;

	return (node);
}
