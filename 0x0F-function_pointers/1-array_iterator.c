#include <stdio.h>

/**
 * array_iterator - executes function
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size && action)
	{
		for (a = 0; a < size; a++)
		{
			(*action)(array[a]);
		}
	}
}
