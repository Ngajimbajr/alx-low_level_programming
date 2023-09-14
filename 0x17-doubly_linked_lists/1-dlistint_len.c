#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* Initialize count to 0 */

	/* Traverse the list and increment count for each node */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count); /* Return the number of elements */
}
