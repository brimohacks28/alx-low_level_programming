	#include <stdio.h>
	#include <stdlib.h>
	/**
	 *main - Entry Point of the Code
	 *
	 *Description :printing possible combinations of 2 two-digit numbers.
	 *
	 *Return : 0 always sucess.
	 */
	int main(void)
	{
		int i;
		int j;

		for (i = 0; i <= 99; i++)
		{
			for (j = i + 1; j <= 99; j++)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar ('\n');
		return (0);
	}
