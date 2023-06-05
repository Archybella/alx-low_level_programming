#include "lists.h"

/**
*sum_listint - Computes the sum of all data elements in a list
*@head: Pointer to the head of the list
*Return: The computed sum, 0 if the list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
