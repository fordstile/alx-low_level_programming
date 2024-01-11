#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list.
* @head: Double pointer to the beginning of the doubly linked list.
* @n: Value to add to the new node.
*
* Return: Pointer to the new node, or NULL on failure.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!new)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = (head) ? *head : NULL;

    if (*head)
        (*head)->prev = new;

    *head = new;

    return new;
}
