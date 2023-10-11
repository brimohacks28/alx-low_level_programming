#include "main.h"
/**
 * print_alphabet_x10 - to print the alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char z;
	int j = 0;

	while (j < 10)
	{
		z = 'a';
		while (z <= 'z')
		{
			_putchar(z);
			z++;
		}
		_putchar('\n');
		j++;
	}
}
