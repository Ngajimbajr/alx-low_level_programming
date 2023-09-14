#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value and pointers for the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* If the list is empty, update the head to point to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the current tail node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Update the tail's next pointer to the new node */
	current->next = new_node;
	/* Update the new node's prev pointer to the current tail node */
	new_node->prev = current;

	return (new_node);
}
