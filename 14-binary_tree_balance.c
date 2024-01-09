#include"binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of current node
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (2);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		return (-1);
	}
	return (3);
}
