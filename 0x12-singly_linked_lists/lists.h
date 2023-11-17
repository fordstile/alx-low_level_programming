#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - malloc
 * @len: full length of the string
 * @next: it points to the next node
 * Description: here we singly linked list node structure
 * for Holberton project only
 */
size_t print_list(const list_t *m);

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;
size_t list_len(const list_t *m);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
