#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return is_complete(tree, 0, binary_tree_size(tree));
}

/**
 * is_complete - Helper function to check if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: Index of the current node
 * @node_count: Total number of nodes in the tree
 * Return: 1 if the subtree is complete, 0 otherwise
*/
int is_complete(const binary_tree_t *tree, size_t index, size_t node_count)
{
	if (tree == NULL)
		return (1);

	if (index >= node_count)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, node_count) &&
		is_complete(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
