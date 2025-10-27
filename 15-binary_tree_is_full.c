#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0.
 * If tree is NULL, return 0.
 *
 * A full binary tree is a tree where every node has either 0 or 2 children.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	if (tree == NULL)
		return (0);

	/* Leaf node: allowed in a full tree */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Node with two children: both subtrees must be full */
	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (left_full && right_full);
	}

	/* Node with only one child: not full */
	return (0);
}
