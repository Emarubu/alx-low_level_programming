#include "main.h"
#include <string.h>

/**
* reverse_array - reverses contents of a string
* @a: first pointer
* @n: second parameter
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
		aux[n - 1 - i] = a[i];

	for (i = 0; i < n; i++)
		a[i] = aux[i];
}
