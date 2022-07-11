#include "main.h"
#include <string.h>

/**
* rev_string - prints a string
* @s: string
* Return: 0
*/
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) -1;

	while(i < j)
	{
		c = s[j];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	} 
}
