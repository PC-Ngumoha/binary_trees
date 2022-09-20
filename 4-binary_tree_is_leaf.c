#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determines if a certain node on binary tree is a leaf
 * @node: node on binary tree to be evaluated.
 *
 * Return: 1 (True) or 0 (False/Error)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* Error */

	/* Checking for the existence of left and  right child nodes. */
	if ((node->left != NULL) || (node->right != NULL))
		return (0); /* Not a leaf */
	else
		return (1); /* A leaf */
}
