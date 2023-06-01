#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert new right node to a parent
 * @parent: Parent node
 * @value: value to be added to the new node
 * Return:	on success - Pointer to the new node
 *		on fail - NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
