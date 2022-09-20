#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - creates & inserts a new node as the right child.
 * @parent: node whose right child we aim to create or update.
 * @value: value to be stored in the new node.
 *
 * Return: address of new node (Succeeds) or NULL (if failed)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		prev_node = parent->right;
		new_node->parent = parent;
		parent->right = new_node;
		prev_node->parent = new_node;
		new_node->right = prev_node;
	}
	else
	{
		new_node->parent = parent;
		parent->right = new_node;
	}
	return (new_node);
}
