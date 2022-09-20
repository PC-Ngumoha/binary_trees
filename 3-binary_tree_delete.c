#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree.
 * @tree: binary tree to be deleted.
 *
 * Return: nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* If the root points to nothing at the beginning */
	if (tree == NULL)
			return;

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	tree->parent = NULL;
	free(tree);
	tree = NULL;
}
