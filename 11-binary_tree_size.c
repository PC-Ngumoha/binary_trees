#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - determines the size of a binary tree.
 * @tree: binary tree in question.
 *
 * Return: size of tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree;

	if (!tree)
		return (0);
	left_subtree = binary_tree_size(tree->left);
	right_subtree = binary_tree_size(tree->right);
	return (left_subtree + right_subtree + 1);
}
