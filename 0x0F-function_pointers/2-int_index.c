#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: number of elements in the array
 * @cmp: is a pointer to function to compare values
 * Return: index first element cmp function doesnt return 0
 * If no element matches -1 is returned
 * If no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			{
				return (j);
			}
		}
	}
	return (-1);
}

