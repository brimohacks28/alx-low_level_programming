#include "main.h"
/**
 * print_last_digit - prints the last  digit in a number
 * @z: is the integer representing the function argument
 * Return: an integer returned is sucess
 */
int print_last_digit(int z)
{
	int mylast;

	mylast = z % 10;

	if (mylast < 0)
		mylast = mylast * -1;
	_putchar(mylast + '0');
}
