#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: That binary tree to check the length
 * Return: the size of th binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
