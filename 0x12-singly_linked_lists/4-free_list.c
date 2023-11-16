#include <stdlib.h>
#include "lists.h"

/**
 * free_list - all it does is to free the linked list
 * @head: list_t is a list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
