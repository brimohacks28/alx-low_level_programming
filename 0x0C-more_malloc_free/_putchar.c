#include <unistd.h>

/**
 * _putchar - writes the character c to stdoutput
 * @c: The Character to print
 *
 * Return: 1 is success
 * on error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
