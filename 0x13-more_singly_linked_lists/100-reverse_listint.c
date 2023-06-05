#include <stdlib.h>
#include "lists.h"

/**
*rev_listint - reverses listint_t linked list
*
*@head: double ptr to head of listint_t linked list
*
*Return: ptr to first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)

{

	listint_t *prev = NULL;

	listint_t *next = NULL;

	while (*head)

	{

		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = next;

	}

	*head = prev;

	return (*head);

}
