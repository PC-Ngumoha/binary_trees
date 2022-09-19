#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node on the binary tree.
 * @parent: the parent of the new node to be created.
 * @value: value to be held by this node.
 *
 * Return: the address of the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

		new_node = malloc(sizeof(binary_tree_t));
		if (!new_node)
				return (NULL);
		else
		{
				new_node->n = value;
				new_node->left = NULL;
				new_node->right = NULL;
				if (parent != NULL)
						new_node->parent = parent;
				else
						new_node->parent = NULL;
				return (new_node);
		}
}
