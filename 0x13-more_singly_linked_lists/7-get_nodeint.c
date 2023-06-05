#include <stdlib.h>
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
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;
	}

	if (counter < index)
		return (NULL);

	return (temp);

}
