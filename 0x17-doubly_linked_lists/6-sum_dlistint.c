#include "lists.h"

/**
 * sum_dlistint - Sums the data (n) of all nodes in a doubly linked list.
 * @head: Pointer to the first node of the linked list.
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;  /* Initialize sum */

    /* Loop through each node in the list and add its data to sum */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;  /* Return the total sum */
}
