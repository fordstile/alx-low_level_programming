#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the first node of the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
    while (head != NULL)
    {
        dlistint_t *next_node = head->next;
        free(head);
        head = next_node;
    }
}
