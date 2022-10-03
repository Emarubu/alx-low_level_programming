#include "main.h"
#include <string.h>
/**
* *_strchr - searches for a character in a string
* @s: string
* @c: Character
* Return: string
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
