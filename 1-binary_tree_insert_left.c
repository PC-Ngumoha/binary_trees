#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - creates & inserts a new node as the left child.
 * @parent: node whose left child we aim to create or update.
 * @value: value to be stored in the new node.
 *
 * Return: address of new node (Succeeds) or NULL (if failed)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *prev_node, *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		prev_node = parent->left;
		new_node->parent = parent;
		parent->left = new_node;
		prev_node->parent = new_node;
		new_node->left = prev_node;
	}
	else
	{
		new_node->parent = parent;
		parent->left = new_node;
	}
	return (new_node);
}
