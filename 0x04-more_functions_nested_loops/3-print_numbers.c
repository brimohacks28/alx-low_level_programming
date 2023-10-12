#include "main.h"
/**
 * _isdigit -checks for digits entered
 * print_numbers - prints numbers
 *
 * Return: 0 or 1 is sucess.
 */
void print_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
