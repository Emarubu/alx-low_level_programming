#include "main.h"

/**
* _islower - prints 1 if the input is a lowecase letter.
* other cases prints a 0.
* @c: character to be displayed
* Return: 1 for c lowercase character
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
