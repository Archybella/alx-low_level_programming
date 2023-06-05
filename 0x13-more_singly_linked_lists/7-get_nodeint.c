#include "lists.h"

/**
* get_nodeint_at_index - Retrieves the node at the specified index in a listint_t linked list
* @head: Pointer to the first/head node of the list
* @index:  Index of the desired node
* Return: The node at the specified index in the listint_t linked list, 
* or NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
