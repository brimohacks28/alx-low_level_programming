#include "main.h"
/**
 * print_diagonal - Prints line diagonally
 * @n:character to be used in printing
 * Return:void
 */
void print_diagonal(int n)
{
	int a = 0, b;

	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}

