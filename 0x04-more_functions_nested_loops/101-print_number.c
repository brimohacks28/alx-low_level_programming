#include "main.h"
/**
 * print_number -Prints numbers
 * @n: character representing integer
 */
void print_number(int n)
{
	int a;
	int b = 1;
	unsigned int i = n;
	unsigned int j = n;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		j = n;
		i = n;
		i += 1;
		j += 1;
	}
	while (i != 0)
	{
		i = i / 10;
		c++;
	}
	for (a = 1; a < c; a++)
	{
		b *= 10;
	}
	for (a = 0; a < c; a++)
	{
		_putchar(j / b + '0');
		j = j % b;
		b = b / 10;
	}
}
