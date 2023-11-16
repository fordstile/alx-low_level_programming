#include <stdlib.h>
#include "lists.h"

/**
 * list_len - we have to  return the number of elements in a linked list
 * @m: we has to point to the list_t list
 * Return: here are the numbers of elements in m
 */
size_t list_len(const list_t *m)
{
	size_t p = 0;

	while (m)
	{
		p++;
		m = m->next;
	}
	return (p);
}
