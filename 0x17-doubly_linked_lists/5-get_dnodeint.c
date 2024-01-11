#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a node from a doubly linked list at a specific index.
 * @head: Pointer to the first node of the linked list.
 * @index: The index of the node to be retrieved.
 * Return: The address of the node at the specified index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    /* Traverse the list until the specified index is reached or the end of the list */
    while (head != NULL && i < index)
    {
        head = head->next;
        i++;
    }

    /* If the index matches, return the current node */
    if (i == index)
        return head;

    /* If the node at the specified index is not found, return NULL */
    return NULL;
}
