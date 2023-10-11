#include "main.h"
/**
 * print_alphabet - Code Execution begins
 * Return: void
 *
 */
void print_alphabet(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		_putchar(r);
		r++;
	}
	_putchar('\n');
}
