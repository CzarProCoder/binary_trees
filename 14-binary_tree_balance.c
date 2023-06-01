#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance
 *			factor of a binary tree
 * @tree: Binary tree to be measured
 * Return: Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}


/**
 * binary_tree_height - Function to return height of a binary tree
 * @tree: Tree to be evaluated
 * Return: Height of the left or that of right
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		r = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (l > r ? l : r);
	}
	return (0);
}
