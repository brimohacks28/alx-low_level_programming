#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory  for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: Pointer
 */

void *_calloc(usigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);
	_memset(m, 0, (nmemb * size));
	return (m);
}
