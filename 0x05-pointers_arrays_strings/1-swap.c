#include "main.h"
/**
 * swap_int - swap values of two integers
 *
 * @a: First Pointer
 * @b: Second Pointer
 * c: integer 1
 * d: integer d
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
