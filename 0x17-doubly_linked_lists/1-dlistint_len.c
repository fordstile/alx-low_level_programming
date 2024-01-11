#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Pointer to the first node of the linked list
 *
 * Return: The number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		count++;
	}
	return (count);
}
