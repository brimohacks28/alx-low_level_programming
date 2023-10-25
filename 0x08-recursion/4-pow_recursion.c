#include "main.h"
/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exponent
 * Return: an integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_reccursion(x, y - 1));
	}
	return (1);
}
