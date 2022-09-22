#include <stdlib.h>
#include "binary_trees.h"


/**
 * find_height - gets the height of a subtree on a binary tree.
 * @root: binary tree / subtree in question.
 *
 * Return: max height of subtree.
 */
int find_height(const binary_tree_t *root)
{
	int left, right;

	if (!root)
		return (0);
	left = find_height(root->left);
	right = find_height(root->right);
	return (left >= right ? left + 1 : right + 1);
}


/**
 * binary_tree_balance - determines the balance factor of a binary tree.
 * @tree: binary tree in question.
 *
 * Return: balance factor as a +ve or -ve number.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = find_height(tree->left);
	right = find_height(tree->right);
	return (left - right);
}
