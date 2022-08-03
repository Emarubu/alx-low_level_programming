#include "function_pointers.h"

/**
*array_iterator - an array
*@array: the array
*@size: size of the array
*@action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
