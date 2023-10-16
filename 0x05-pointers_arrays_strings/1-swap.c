#include "main.h"
/*
 * swap_int - swap variable values
 * @a: First Pointer
 * @b: Second Pointer
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
