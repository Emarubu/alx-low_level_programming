#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long Longint;
	long long longlongInt;
	float floatType;


	printf("Size of a char: %d byte(s)\n", sizeof(chartype));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a longInt: %d byte(s)\n", sizeof(Longint));
	printf("Size of a longlongInt: %d byte(s)\n", sizeof(longlongInt));
	printf("Size of a float: %d bytes(s)\n", sizeof(floatType));
	return (0);
}
