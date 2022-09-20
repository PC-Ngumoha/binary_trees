#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - determines the height of a binary tree from root node.
 * @tree: tree whose height we want to determine.
 *
 * Return: height of tree (Success) or 0 (Error or output)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->left != NULL) /* Does this node have a left child? */
		{
			tree = tree->left;
			height++;
		}
		else if (tree->right != NULL) /* Does this node have a right child? */
		{
			tree = tree->right;
			height++;
		}
		else
			tree = tree->left;
	}
	return (height);
}
