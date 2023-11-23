#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Represent int
 */

void print_binary(unsigned long int n)
{
	int a;
	unsigned int k;
	int print_on = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (a = 63; a >= 0; --a)
	{
		k = n >> a;
		if (k & 1)
		{
			_putchar('1');
			print_on = 1;
		}
		else if (!(k & 1) && print_on)
			_putchar('0');
	}
}
