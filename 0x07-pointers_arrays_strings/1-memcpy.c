#include "main.c"

/**
* _memcpy - copies memory area
* @dest: destination address
* @src: source address
* @n: unsigned int
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}

