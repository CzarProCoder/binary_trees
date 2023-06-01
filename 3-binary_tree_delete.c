#include "binary_trees.h"

/**
 * binary_tree_delete - Function to delete an entire binary tree
 * @tree: Pointer to the binary tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
