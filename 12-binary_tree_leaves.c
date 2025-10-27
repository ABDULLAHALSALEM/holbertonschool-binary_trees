#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in the tree.
 * If tree is NULL, return 0.
 *
 * A leaf is a node that has no children (no left and no right).
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* if it's a leaf, count it as 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* otherwise, count leaves in left + leaves in right */
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
