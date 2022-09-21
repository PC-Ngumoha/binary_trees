#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the number of nodes with at least one child node
 * @tree: binary tree of interest.
 *
 * Return: number of nodes with one child node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if ((tree->left != NULL) || (tree->right != NULL))
		return (left + right + 1);
	else
		return (left + right);
}
