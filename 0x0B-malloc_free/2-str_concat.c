#include "main.h"
/**
 * _strlen - functions for length of a string
 * @s: input char
 * Return: String Length
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (1);
}
/**
 * str_concat - Concat 2 strings
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int 14, 15;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		14 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		15 = _strlen(s2);

	conc = malloc(14 + 15 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;
	while ((*tmp++ = *s2++))
		;
	return (conc);
}
