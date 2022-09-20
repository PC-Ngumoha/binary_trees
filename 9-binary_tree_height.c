#include <stdlib.h>
#include "binary_trees.h"

/**
 * find_height - helper function using recursion to get height of binary tree.
 * @root: root of binary tree.
 *
 * Return: Exact height of binary tree.
 */
size_t find_height(const binary_tree_t *root)
{
	size_t left_height, right_height;

	if (root == NULL)
		return (0);

	left_height = find_height(root->left);
	right_height = find_height(root->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - determines the height of a binary tree from root node.
 * @tree: tree whose height we want to determine.
 *
 * Return: height of tree (Success) or 0 (Error or output)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = find_height(tree);
	return (height - 1); /* returns the height using 0th index expression */
}
