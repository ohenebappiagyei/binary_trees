#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 * Return: A pointer to the lowest common ancestor node, or NULL if not found.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;
	while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(ancestor, second))
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another.
 * @ancestor: A pointer to the potential ancestor node.
 * @descendant: A pointer to the potential descendant node.
 * Return: 1 if descendant is a descendant of ancestor, 0 otherwise.
*/
int binary_tree_is_descendant(const binary_tree_t *ancestor,
		const binary_tree_t *descendant)
{
	while (descendant != NULL)
	{
		if (descendant == ancestor)
			return (1);
		descendant = descendant->parent;
	}

	return (0);
}
