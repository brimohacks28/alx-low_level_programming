#include <stdlib.h>
/**
 * _strdup - copy function
 * @str: pointer to a string
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *p;
	int x = 0, y;

	if (!str)
		return (NULL);

	while (*(str + x))
		x++;
	x++;
	p = malloc(sizeof(char) * x);

	if (p == NULL)
	{
		return (NULL);
	}

	for (y = 0; y <= y; y++)
	{
		p[y] = str[y];
	}
	return (p);
}
