#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer is sucess
 */
int **alloc_grid(int width, int height)
{
int **s, i, c;

if (width <= 0 || height <= 0)
{
	return (NULL);
}
s = malloc(sizeof(int *) * height);
if (s == NULL)
{
	return (NULL);
}

for (i = 0; i < height; i++)
{
	s[i] = malloc(sizeof(int) * width);

	if (s[i] == NULL)
	{
		for (; i >= 0; i--)
		{
			free(s[i]);
		}
		free(s);
		return (NULL);
	}

	for (c = 0; c <= width; c++)
	{
		s[i][c] = 0;
	}
}
	return (s);
}


