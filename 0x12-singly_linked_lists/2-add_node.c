#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - all we is a new node at the beginning of a linked list
 * @head: it should double point to the list_t list
 * @str: just add new string to add in the node
 * Return: the address of the NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
