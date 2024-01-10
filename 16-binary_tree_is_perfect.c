#include"binary_trees.h"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left && tree->right)
	{
		if ((!(tree->left->left) && !(tree->left->right)) &&
			(!(tree->right->left) && !(tree->right->right)))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))
		return (1);
	return (0);
}
