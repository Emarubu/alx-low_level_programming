#include <stdio.h>

/**
* main - Prints the alphabets
* Return: 0 is success
*/
int main(void)

{
	char a = 'a';
	char z = 'z';

	while (a <= z)
{
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
