#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array is sucess
 */

int *array_range(int min, int max)
{
	int *arr, a = 0, l = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (a <= max - min)
		arr[a++] = l++;
	return (arr);
}
