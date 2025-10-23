#include"binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child
* @parent: pointer to the parent node
* @value: value to put in
* Description: a function that inserts a node as the left-child
* Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	tmp = parent->left;
	new_node->n = value;
	new_node->right = NULL;
	if (tmp != NULL)
	{
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		new_node->left = NULL;
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
