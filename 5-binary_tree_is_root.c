#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - determines if a certain node on binary tree is root
 * @node: node on binary tree to be evaluated.
 *
 * Return: 1 (True) or 0 (False/Error)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* Error */

	/* Checking for the existence of a parent node. */
	if (node->parent != NULL)
		return (0); /* Not the root node */
	else
		return (1); /* Root node */
}
