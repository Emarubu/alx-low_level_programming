#include <stdio.h>
#include <string.h>

/**
 * _pow - custom pow fn
 * @base: base of power calc
 * @p: power to raise base to
 * Return: result of pow calc
 */
unsigned int _pow(unsigned int base, unsigned int p)
{
	if (p != 0)
	{
		return (base * _pow(base, p - 1));
	}
	else
	{
		return (1);
	}
}
/**
  * binary_to_uint - fn to convert binary to decimal
  *@b: char str containing the bits
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum, str_l;

	if (b == NULL)
	{
		return (0);
	}

	str_l = strlen(b);

	sum = 0;
	/* printf("%i\n", str_l); */

	for (i = 0; i < str_l; i++)
	{
	/* printf("%d\n", (int)(pow(2, i))); */
	/* printf("%d\n", (b[str_l - 1 - i] - '0')); */
	if (b[i] != '1' && b[i] != '0')
	{
	return (0);
	}
	sum = sum + ((unsigned int) _pow(2, i) * (b[str_l - 1 - i] - '0'));
	}
	return (sum);
}
