#include "lists.h"
#include <stdlib.h>

/**
*insert_nodeint_at_index - insert node at specific position
* @head: linked list
*@idx: index
*@n: int
* Return: Address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
	for (; i < idx - 1 && temp != NULL; i++)
		 temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
}
