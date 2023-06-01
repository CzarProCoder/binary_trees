#include "binary_trees.h"

/**
 * binary_tree_postorder - Function to go through a
 *			binary tree using post-order traversal
 * @tree: Pointer to the root node of the binary tree
 * @func: Function to be called on each node
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
