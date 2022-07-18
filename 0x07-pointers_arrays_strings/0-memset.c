#include "main.h"

/**
* _memset - sets count bytes another variable
* @s: memory to be filled
* @b: constant byte
* @n: number of spaces to fill with
* Return: a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
