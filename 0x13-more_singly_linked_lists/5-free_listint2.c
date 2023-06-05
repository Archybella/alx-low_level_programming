#include "lists.h"

/**
* free_listint2 - Deallocates memory for a listint_t list
* @head: Double pointer to the head/first node of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			free(placeholder);
		}
	}
}
