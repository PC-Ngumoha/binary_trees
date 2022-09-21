#include <stdlib.h>
#include "binary_trees.h"

/**
 * get_left_height - gets the left height of a binary tree.
 * @root: binary tree in question.
 *
 * Return: left height or 0 (fails)
 */
int get_left_height(const binary_tree_t *root)
{
	int left_height;

	if (!root)
		return (0);
	left_height = get_left_height(root->left);
	return (left_height + 1);
}

/**
 * get_right_height - gets the right height of a binary tree.
 * @root: binary tree in question.
 *
 * Return: right height or 0 (fails)
 */
int get_right_height(const binary_tree_t *root)
{
	int right_height;

	if (!root)
		return (0);
	right_height = get_right_height(root->right);
	return (right_height + 1);
}


/**
 * binary_tree_balance - determines the balance factor of a binary tree.
 * @tree: binary tree in question.
 *
 * Return: balance factor as a +ve or -ve number.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = get_left_height(tree);
	right_height = get_right_height(tree);
	return (left_height - right_height);
}
