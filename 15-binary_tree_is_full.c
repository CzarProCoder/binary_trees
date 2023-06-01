#include "binary_trees.h"

/**
 * binary_tree_is_full - Function to check whether a binary tree is full
 * @tree: Tree to be evaluated
 * Return:	1: if full
 *		0: If NULL or if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Check if a tree if recursively full
 * @tree: Binary tree to check
 * Return: 1 if full, otherwise, 0
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
