#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - determines the number of leaves on the binary tree.
 * @tree: binary tree of interest.
 *
 * Return: number of leaves on the binary tree or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
