#include "binary_trees.h"

/**
 * height_balance - helper to compute height for balance factor
 * @tree: pointer to the node to measure the height from
 *
 * Return: height of the node using the convention:
 * - NULL child has height -1
 * - leaf node has height 0
 */
static int height_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
		return (-1);

	left_h = height_balance(tree->left);
	right_h = height_balance(tree->right);

	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor (left height - right height).
 * If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height_balance(tree->left);
	right_height = height_balance(tree->right);

	return (left_height - right_height);
}
