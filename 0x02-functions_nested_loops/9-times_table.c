#include "main.h"
/**
 * times_table -prints a timetable
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j;
	int prod;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			prod = i * j;
			if (j == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}


