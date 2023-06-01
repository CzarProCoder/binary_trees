#include "binary_trees.h"

/**
 * binary_tree_leaves - Function to count the number of tree leaves
 * @tree: Binary tree to check the leaves
 * Return: Number of trees
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
