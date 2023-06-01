#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert new left node to a parent
 * @parent: Parent node
 * @value: value to be added to the new node
 * Return:	on success - Pointer to the new node
 *		on fail - NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (new);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
