#include "main.h"
/**
 * _strlen_recursion - returns the String length
 * @s: pointer to  the string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s > '\0')
	{
		j += _strlen_recursion(s + 1) + 1;
	}

	return (j);
}
