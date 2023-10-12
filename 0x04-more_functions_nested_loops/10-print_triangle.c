#include "main.h"
/**
 * print_triangle - Program to build a Triangle
 * @size: int type
 * Return: void  sucess
 */
void print_triangle(int size)
{
	int d;
	int e;
	int f;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (d = 1; d <= size; d++)
		{
			for (e = size - d ; e > 0; e--)
			{
				_putchar(' ');
			}
			for (f = 0; f < d ; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

