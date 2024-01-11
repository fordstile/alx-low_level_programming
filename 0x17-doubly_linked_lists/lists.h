#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - Node of a doubly linked list
 * @n: Integer data stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: This structure defines a node for a doubly linked list
 * used in various operations. The list allows for bidirectional traversal.
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * Function prototypes for operations on doubly linked lists.
 * These functions provide basic operations such as adding and removing nodes,
 * calculating the length of the list, and accessing nodes at specific positions.
 */

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* _LISTS_H_ */
