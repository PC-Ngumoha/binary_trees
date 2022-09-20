#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - use preorder traversal method to traverse the tree.
 * @tree: tree to traverse.
 * @func: action (function) to take while traversing the tree.
 *
 * Return: nothing (void)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);  /* Performs the action on the current node's data */
	/* Checking for the existence of a left child */
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	/* Checking for the existence of a right child */
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}
