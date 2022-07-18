#include "main.h"
#include <string.h>

/**
* _strchr - locates a character in a string
* @s: string with character
* @c: character
* Return: a pointer
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
		{
		if (*s == c)
			return (s);
			s++;
		}
		if (*s == c)
			return (s);
		else
			return (NULL);

	
}
