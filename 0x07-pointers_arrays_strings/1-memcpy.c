#include "main.c"
#include <string.h>

/**
* _memcpy - copies memory area
* @dest: destination address
* @src: source address
* @n: unsigned int
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	memcpy ( dest, src, sizeof(src));

	return (dest);
}

