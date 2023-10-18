#include "main.h"
/**
 * reverse_array - reverse int array
 * @a: pointer
 * @n: array length
 * Return: void is sucess
 */
void reverse_array(int *a, int n)
{
	int j = 0, half;

	for (half = n / 2; half > 0; half--, j++)
	{
		a[n - j - 1] += a[j];
		a[j] = a[n - j - 1] - a[j];
		a[n - j - 1] = a[n - j - 1] - a[j];
	}
}
