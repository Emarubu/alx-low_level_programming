#include "lists.h"
#include <stdio.h>

/**
*list_len - returns number of elements in a link
*@h: linked list
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h->next;
		n++;
	}
	return (n);
}
