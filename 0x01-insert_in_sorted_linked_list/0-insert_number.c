#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert node in sort mode
 * @head: pointer to list to be freed
 * @number: int that 
 * Return: node direction
 */
listint_t *insert_node(listint_t **head, int number)
{   
    listint_t* tmp;
    listint_t* new;
    listint_t* current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = number;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        if (new->n < current->n) {
            new->next = current;
            *head = new;
        } else {
            while (current->next != NULL) {
                if (current->next->n > new->n) {
                    tmp = current->next;
                    current->next = new;
                    new->next = tmp;
                    break;
                }
                current = current->next;
            }
        }

        if (new->n > current->n) {
            current->next = new;
        }
    }

    return (new);
}
