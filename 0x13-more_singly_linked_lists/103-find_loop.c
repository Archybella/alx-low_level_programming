#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop - detects loop in linked list
*
* @head: linked list to examine
*
* Return: address of loop starting/returning node, NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	listint_t *ptr, *end;

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}

	return (NULL);
}
