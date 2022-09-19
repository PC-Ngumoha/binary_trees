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
		struct binary_tree_s *right;
};

/* Typedefs */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;  /* Binary Search Trees */
typedef struct binary_tree_s avl_t; /* AVL Trees */
typedef struct binary_tree_s heap_t; /* Binary Max Heap */

/* Function Prototypes */
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif
