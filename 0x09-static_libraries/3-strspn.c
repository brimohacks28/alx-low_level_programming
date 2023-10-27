#include "main.h"
/**
 * _strspn - Gets the Length of a prefix substring.
 * @s: string where substring will check
 * @accept: substring of all accepted character
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *k = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = k;
	}
	return (c);
}
