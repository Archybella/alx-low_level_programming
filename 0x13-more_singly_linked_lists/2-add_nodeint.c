#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Inserts a new node at the start of a listint_t list
* @head: Pointer to the pointer of the head node of the list
* @n: Integer value for the new node
* Return: Address of the new element, NULL if unsuccessful
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
