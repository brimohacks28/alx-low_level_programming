#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums
 * @a: pointer of a
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += *(a + (size * j + j));
		sum2 += *(a + (size * j + size - 1 - j));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
