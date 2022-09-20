#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node on a binary tree.
 * @tree: node of interest.
 *
 * Return: depth or 0 (Error/depth measurement)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
