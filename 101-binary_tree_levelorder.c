#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * @Description: This function traverses the binary tree using level-order
 * traversal and applies the given function to each node's value.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Assuming a reasonable maximum size for the queue */
	binary_tree_t *queue[10000];
	int front = 0, rear = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];
		func(current->n);

		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}
