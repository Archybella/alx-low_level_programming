#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the count of elements in a linked listint_t list
 * @h: Pointer to the head node of the linked list
 * Return: The count of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
    size_t node_count = 0;

   while (h)
{
    h = h->next;
    node_count++;
}

return (node_count);

}
