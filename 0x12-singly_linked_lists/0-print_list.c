#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all lements of the linked list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}