#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node
 *
 * @parent: pointer to parent node
 * @value: node value
 *
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL || parent == NULL)
		return (NULL);
	left_node->n = value;
	left_node->parent = parent;
	left_node->left = parent->left;
	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
	}
	else
		parent->left = left_node;
	left_node->right = NULL;
	return (left_node);
}
