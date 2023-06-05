#include "lists.h"

/**
* free_listint_safe - safely frees a linked list
* @h:  pointer to the head of the list
* Description: This function frees a linked list in a safe manner
* section header: the header of this function is lists.h
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i = 0;
	int rest;

	actual = *h;

	while (actual)
	{
		rest = actual - actual->next;

		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		}
		else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
