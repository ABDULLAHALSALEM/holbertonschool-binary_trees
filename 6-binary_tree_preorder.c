#include"binary_trees.h"
/**
* binary_tree_preorder - pre-order traversal
* @tree: pointer to the root
* @value: value
* Description: a function that uses pre-order traversal
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int value))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
