#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/

size_t print_list(const list_t *h) {
    const list_t *current = h;
    size_t node_count = 0;

    while (current != NULL) {
        if (current->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", node_count, current->str);
        }

        current = current->next;
        node_count++;
    }

    return node_count;
}
