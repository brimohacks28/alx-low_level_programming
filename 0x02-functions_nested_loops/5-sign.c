#include "main.h"
/**
 * print_sign - Purposefully to check numbers.
 * @n: the number to check
 * Return: 0 or 1 is sucess.
 */
int print_sign(int n)
{
	int verify;

	if (n > 0)
	{
		verify = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		verify = 0;
		_putchar('0');
	}
	else
	{
		verify = -1;
		_putchar('-');
	}
	return (verify);
}

