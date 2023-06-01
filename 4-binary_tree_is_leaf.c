#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check whether a node is leaf
 * @node: Node to be checked
 * Return:	1: If node is a leaf
 *		0: If node is not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
