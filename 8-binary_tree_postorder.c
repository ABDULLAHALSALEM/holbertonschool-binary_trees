/**
* binary_tree_postorder - in-order traversal
* @tree: pointer to the root
* @value: value
* Description: a function that uses post-order traversal
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int value))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
