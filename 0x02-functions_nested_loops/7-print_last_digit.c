#include "main.h"
/**
 * print_last_digit - prints the last  digit in a number
 * @z: is the integer representing the function argument
 * Return: an integer returned is sucess
 */
int print_last_digit(int z)
{
	int l;

	l = z % 10;

	if (l < 0)
		l = l * -1;

	_putchar(l + '0');

	return (l);
}
