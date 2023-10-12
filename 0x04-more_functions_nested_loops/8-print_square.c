#include "main.h"
/**
 * print_square -prints squares of given numbers
 * @size: integer square size
 * Return: void is sucess
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
