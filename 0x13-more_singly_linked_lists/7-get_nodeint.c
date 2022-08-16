#include "lists.h"
#include <stdlib.h>

/**
*get_nodeint_at_index - find node
*@head: pointer to
*@index: index
*Return: head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	if (head == NULL)
	return (NULL);

	for (i = 0; i < index; i++)
	{
	temp = temp->next;

	if (temp == NULL)
	return (NULL);
	}
	return (temp);
}
