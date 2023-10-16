#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{
	int l, b, c;
	char rev;

	for (l = 0; s[l] != '\0'; len++)
	;

	b = 0;

	c = l / 2;

	while (c--)
	{
		rev = s[l - b - 1];
		s[l - b - 1] = s[b];
		s[b] = rev;
		b++;
	}
}
