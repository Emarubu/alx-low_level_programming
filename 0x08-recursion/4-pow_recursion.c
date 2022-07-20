#include "main.h"

/**
* _pow_recursion - prints x raised to power y
* @x: base interger
* @y: raised power interger
* Return: Returns value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
