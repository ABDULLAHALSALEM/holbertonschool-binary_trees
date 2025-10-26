#include"binary_trees.h"
/**
* binary_tree_depth - measures the depth
* @tree: pointer to the root
* Description: a function that measures the depth
* Return: depth or NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
