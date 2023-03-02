#include "binary_trees.h"

/**
 * binary_tree_sibling - binary_tree_sibling
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node, otherwise NULL if node or parent is NULL
 *	or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
