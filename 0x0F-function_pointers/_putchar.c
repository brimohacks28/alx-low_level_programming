#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The Character to Print
 *
 * Return: On Sucess 1
 * On error, -1 is returned and errno appropriately set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
