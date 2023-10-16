#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{
	int a;
	char b;

	for (a = 0; a < _strlen(s) / 2; a++)
	{
		b = s[a];
		s[a] = s[_strlen(s) - a - 1];
		s[_strlen(s) - i - 1] = b;
	}
}

