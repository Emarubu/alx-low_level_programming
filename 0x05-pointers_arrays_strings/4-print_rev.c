#include "main.h"
#include <string.h>

/**
* print_rev - prints a string in reverse
* @s: string
* Return: 0
*/
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
