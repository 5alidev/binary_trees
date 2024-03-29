#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);

	balance = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);

	return (balance);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 +
		(left_height > right_height ? left_height : right_height));
}
