#include "main.h"

/**
* _isalpha - shows 1 if the input is a letter
* other cases print 0
* @c: checks  the character in A-z and a-z
*
* Return: 1 for lettters and 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
