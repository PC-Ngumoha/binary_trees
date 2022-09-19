#ifndef BINARY_TREES_H_
#define BINARY_TREES_H_

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: data stored in the node
 * @parent: pointer to the parent node.
 * @left: pointer to the left child of the node.
 * @right: pointer to the right child of the node.
 */
struct binary_tree_s
{
		int n;
		struct binary_tree_s *parent;
		struct binary_tree_s *left;
		struct binary_tree_s *left;
}

/* Typedefs */
typedef binary_tree_s binary_tree_t;
typedef binary_tree_s bst_t;  /* Binary Search Trees */
typedef binary_tree_s avl_t; /* AVL Trees */
typedef binary_tree_s heap_t; /* Binary Max Heap */

/* Function Prototypes */
void binary_tree_print(const binary_tree_t *tree);

#endif
