#include "main.h"
/**
 * puts_half(char *str)
 * @str: pointer to the string to print
 * Return: void
 */
void puts_half(char *str)
{
	int length, n , j;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (j = length / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	} else if (len % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; j++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

