#include <unistd.h>

/**
<<<<<<< HEAD
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 2c2d85e891ec400d9bc1f4c18e29a135e2c644fb
int _putchar(char c)
{
	return (write(1, &c, 1));
}
