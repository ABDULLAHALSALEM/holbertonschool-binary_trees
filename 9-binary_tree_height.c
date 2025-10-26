#include"binary_trees.h"
/**
* binary_tree_height - measures the height
* @tree: pointer to the root
* Description: a function that measures the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t count = 0, Lcount = 0, Rcount = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		Lcount = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		Rcount = 1 + binary_tree_height(tree->right);
	if (Lcount > Rcount)
		return (Lcount);
	else
		return (Rcount);
}
