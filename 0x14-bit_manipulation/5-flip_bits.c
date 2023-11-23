#include "main.h"

/**
 * flip_bits - Number of bits flipped to get from one number to another
 * @n: First integer
 * @m: Second integer
 *
 * Return: Number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			++k;
		n = n >> 1;
	}
	return (k);
}
