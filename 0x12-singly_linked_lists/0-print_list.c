#include "lists.h"

/**
 * Print_list - prints all the elements of the list_t list
 * @h:  pointer to the list
 * Return: Number of the nodes.
 **/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}

