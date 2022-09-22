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
	int height = 0;

	while (root)
	{
		root = root->left;
		height++;
	}
	return (height);
}

/**
 * check_is_perfect - helps check if a binary tree is perfect.
 * @root: binary tree in question.
 * @height: left height of the binary  tree.
 * @level : level of the current node on the binary tree.
 *
 * Return: 1 or 0
 */
int check_is_perfect(const binary_tree_t *root, int height, int level)
{
	if (!root)
		return (0);
	if (!(root->left) && !(root->right))
		return (height == level + 1);
	if (!(root->left) || !(root->right))
		return (0);

	return (check_is_perfect(root->left, height, level + 1) &&
				check_is_perfect(root->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - determines if a binary tree is perfect.
 * @tree: binary tree in question.
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);
	height = get_height(tree);
	return check_is_perfect(tree, height, 0);
}
