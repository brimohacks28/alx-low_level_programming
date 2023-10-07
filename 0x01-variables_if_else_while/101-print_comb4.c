	#include <stdio.h>
	/**
	 * main - entry point
	 *
	 * Description :program that prints three digits combo
	 * Return: always returns 0;
	 *
	 */
	int main(void)
	{
		int i;
		int j;
		int b;

		for (i = 0; i <= 9; j++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (b > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(b + '0');
					if (i != 7 || j != 8 || b != 9)	
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	
		putchar('\n');
		return (0);
	}

