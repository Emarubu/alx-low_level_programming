#include <stdio.h>

/**
<<<<<<< HEAD
* main - entry point
* Prints the alphabets in lowercase, then in upeercase.
* Returns: 0 is success
*/
int main(void)
{
	char a ='a';
	char z ='z';
	char A ='A';
	char Z ='Z';

	while (a <= z)
{
	putchar(a);
	a++;
}
	while (A <= Z)
{
	putchar(A);
	A++;
}
=======
* main - prints the alphabetics
*
* Return: - Always (success)
*/
int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
>>>>>>> aa1508e13e2cbb515190318c78bba6967c2e6456
	putchar('\n');
	return (0);
}
