/**
* binary_tree_inorder - in-order traversal
* @tree: pointer to the root
* @value: value
* Description: a function that uses in-order traversal
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int value))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
