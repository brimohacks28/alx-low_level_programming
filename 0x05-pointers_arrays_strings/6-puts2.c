#include "main.h"
/**
 * puts2 - prints a string plus a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}

		j++;
	}
	_putchar('\n');
}
