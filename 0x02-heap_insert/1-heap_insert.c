#include <stdlib.h>
#include "binary_trees.h"

/**
* checkTop - check top 
* @root: top
* @newNode: new node
* Return: node
*/
// heap_t *checkTop(heap_t *root, heap_t newNode) {

// }


/**
* heap_insert - add new node to the binary tree
*
* @root: root
* @value: value
* Return: node
*/
heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *newNode;

    newNode = malloc(sizeof(heap_t));
    if (newNode == NULL)
    {
        return NULL;
    }

    newNode->n = value;

    if ((*root) == NULL)
    {
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        *root = newNode;
        return (newNode);
    }

    if ((*root)->n < value)
    {
        newNode->left = *root;
        (*root)->parent = newNode;
        *root = newNode;
        return (newNode);
    }

    return (newNode);
}