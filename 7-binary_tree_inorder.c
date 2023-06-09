#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through a
 *		binary tree using in-order traversal
 * @tree: Pointer to the tree to traverse
 * @func: Function to call on node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
