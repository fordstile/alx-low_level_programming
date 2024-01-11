#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index
 *                            in a doubly linked list.
 * @h: Double pointer to the first node of the list.
 * @idx: The index at which to add the new node, starting from 0.
 * @n: The value to store in the new node.
 * Return: The address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL || (current->next == NULL && i < idx - 1))
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
