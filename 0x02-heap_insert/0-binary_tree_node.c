#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - add new node to the binary tree
*
* @parent: tree
* @value: int
* Return: node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
{
return (NULL);
}

newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;

if (parent == NULL)
{
newNode->parent = NULL;
return (newNode);
}
else
{
newNode->parent = parent;
return (newNode);
}

}
