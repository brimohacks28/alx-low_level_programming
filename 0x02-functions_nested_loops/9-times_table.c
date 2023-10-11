#include "main.h"
/**
 * times_table -prints a timetable
 * Return: void
 */
void times_table(void)
{
	int c;
	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			int product = c * d;

			if (d == o)
			{
				_putchar('0');
			} else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}


