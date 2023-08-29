#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);
		return ((left_height > right_height) ? (left_height + 1) :
				(right_height + 1));
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor of the binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}
	return (0);
}
