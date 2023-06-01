#include "binary_trees.h"

/**
 * binary_tree_is_root - Function to check whether a node is the root
 * @node: Node to be checked
 * Return:	1: If node is the root
 *		0: If node is NULL or is not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
