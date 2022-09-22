#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_sibling - returns the sibling node of the current node on B.T
 * @node: current node in question.
 *
 * Return: sibling of @node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	if (!(node) || !(node->parent))
		return (NULL);
	parent = node->parent;
	if (!(parent->left) || !(parent->right))
		return (NULL);
	if (parent->left->n == node->n)
		sibling = parent->right;
	else
		sibling = parent->left;
	return (sibling);
}
