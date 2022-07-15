#include "main.h"

/**
* leet - encodes works of a string
* @s: a string
* Return: encoded string
*/
char *leet(char *s)
{
	int a = 0, i, b = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		i = 0;

		while (i < b)
		{
			if (s[a] == tr[i] || s[a] - 32 == tr[i])
				s[a] = trw[i];
				i++;
		}
		a++;
	}
	return (s);
}
