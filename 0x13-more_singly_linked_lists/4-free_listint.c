#include "lists.h"

/**
* free_listint - Deallocates memory for a listint_t list
* @head: Pointer to the head/first node of the list
*/

void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}
