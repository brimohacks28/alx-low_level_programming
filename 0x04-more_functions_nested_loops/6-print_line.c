#include "main.h"
/**
 * print_line - initiates line printing
 *
 * @n: int used to represent integer
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
