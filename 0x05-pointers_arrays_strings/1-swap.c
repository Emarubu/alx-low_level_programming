#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: first var name
* @b: second var name
* Retun: 0
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}



