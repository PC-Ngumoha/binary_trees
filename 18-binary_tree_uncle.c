#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_uncle - gets the uncle node of a node on the binary tree.
 * @node: current node in question.
 *
 * Return: uncle node of @node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *uncle;

	if (!(node) || !(node->parent) || !(node->parent->parent))
		return (NULL);
	grand_parent = node->parent->parent;
	if (!(grand_parent->left) || !(grand_parent->right))
		return (NULL);
	if (grand_parent->left->n == node->parent->n)
		uncle = grand_parent->right;
	else
		uncle = grand_parent->left;
	return (uncle);
}
