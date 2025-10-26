#include"binary_trees.h"
/**
* binary_tree_size - measures the size
* @tree: pointer to the root
* Description: a function that measures the size
* Return: size or o
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t Lcount = 0, Rcount = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		Lcount = binary_tree_size(tree->left);
	if (tree->right != NULL)
		Rcount = binary_tree_size(tree->right);
	return (1 + Lcount + Rcount);
}
