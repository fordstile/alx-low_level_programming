#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a node to the end of a doubly linked list.
* @head: Double pointer to the head of the linked list.
* @n: Value for the new node.
* Return: The address of the new node, or NULL on failure.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *current;

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) /* If the list is empty, insert at the beginning*/
    {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    /* Navigate to the end of the list*/
    current = *head;
    while (current->next)
    {
        current = current->next;
    }

    current->next = new_node;
    new_node->prev = current;

    return new_node;
}
