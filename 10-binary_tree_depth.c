#include"binary_trees.h"
/**
 * binary_tree_depth -  measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	else if (tree != NULL && tree->parent != NULL)
		depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
