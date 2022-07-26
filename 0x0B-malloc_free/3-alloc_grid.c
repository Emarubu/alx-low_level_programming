#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - eturns a pointer to a 2 dimensional array of integers
* @width: columns
* @height: rows
* Return: NUL if FAIL and pointer to 2 dim array on success
*/
int **alloc_grid(int width, int height)
{
	int **my_array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_array = malloc(sizeof(int *) * height);
	if (my_array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		my_array[i] = malloc(sizeof(int) * width);

		if (my_array[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
			my_array[i][j] = 0;
	}
	return (my_array);
}
