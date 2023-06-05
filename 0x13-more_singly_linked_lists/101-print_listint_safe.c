#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* find_listint_loop_pl - find_listint_loop_pl - detects loop in linked list
*
* @head: linked list toexamine
*
* Return:address of loop starting/returning node, NULL if no loop
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
