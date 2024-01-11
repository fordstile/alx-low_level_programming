#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index
 *                            in a doubly linked list.
 * @head: Double pointer to the first node of the list.
 * @index: The index of the node that should be deleted, starting from 0.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	to_delete = current;
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(to_delete);
	return (1);
}
