#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a new node
 * @parent: Parent node of the new node
 * @value: Value to be entered in the new node
 * Return: On success it returns pointer to the new node
 *	On fails it returns NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
