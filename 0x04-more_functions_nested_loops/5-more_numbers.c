#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14.
* 10 times.
* Return: no return.
*/
void more_numbers(void)
{
	int x, y;

		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 14; y++)
			{
				if (y > 9)
				{
					_putchar(1 + '0');
				}
				{
					_putchar(y % 10 + '0');
				}
			}
			_putchar('\n');
		}
}

