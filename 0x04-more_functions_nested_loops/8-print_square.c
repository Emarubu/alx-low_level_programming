#include "main.h"

/**
* print_square - sqaures on a line
* @size: sqaures are printed
* Return: no return.
*/

void print_square(int size)

{
	int x;
	int f;

	for (x = 0; x < size; x++)
	{
		for (f = 0; f < x; f++)
		{
		}
		_putchar(35);
		if (x < (size - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
