#include "main.h"

/**
 * _sqrt_recursion - find squareroot
 * @n: integer
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds square root
 * @n: integer to find square root
 * @sq: square root
 * Return: integer
 */

int square(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq * sq < n)
		return (square(n, sq + 1));
	else
		return (-1);
}
