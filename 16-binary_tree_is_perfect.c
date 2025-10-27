#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree. If tree is NULL or a leaf, return 0.
 *
 * Height here is the number of edges on the longest path
 * from this node down to a leaf.
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + tree_height(tree->left);
	if (tree->right)
		right_h = 1 + tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: number of nodes in the tree.
 * If tree is NULL, return 0.
 */
static size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * pow2 - computes 2 raised to the power of e
 * @e: exponent
 *
 * Return: 2^e
 */
static size_t pow2(size_t e)
{
	size_t result = 1;

	while (e > 0)
	{
		result <<= 1;
		e--;
	}
	return (result);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 * If tree is NULL, return 0.
 *
 * A perfect binary tree has all leaves at the same depth and
 * all internal nodes have two children.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h;
	size_t expected_size;
	size_t actual_size;

	if (tree == NULL)
		return (0);

	h = tree_height(tree);
	actual_size = tree_size(tree);
	expected_size = pow2(h + 1) - 1;

	return (actual_size == expected_size);
}
