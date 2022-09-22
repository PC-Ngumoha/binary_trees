#include <stdlib.h>
#include "binary_trees.h"


/**
 * get_height - gets the height of the binary tree.
 * @root: binary tree in question.
 *
 * Return: height of binary tree or 0.
 */
int get_height(const binary_tree_t *root)
{
	int left, right;

	if (!root)
		return (0);
	left = get_height(root->left);
	right = get_height(root->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * check_is_full - checks if binary tree is full.
 * @root: binary tree in question.
 *
 * Return: 1 or 0
 */
int check_is_full(const binary_tree_t *root)
{
	if (!root)
		return (0);
	if (!(root->left) && !(root->right))
		return (1);
	if ((root->left) && (root->right))
		return (check_is_full(root->left) && check_is_full(root->right));
	return (0);
}

/**
 * binary_tree_is_perfect - determines if a binary tree is perfect.
 * @tree: binary tree in question.
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	int is_full;

	if (!tree)
		return (0);
	left_height = get_height(tree->left);
	right_height = get_height(tree->right);
	if (left_height == right_height)
	{
		is_full = check_is_full(tree);
		if (is_full == 1)
			return (1);
	}
	return (0);
}
