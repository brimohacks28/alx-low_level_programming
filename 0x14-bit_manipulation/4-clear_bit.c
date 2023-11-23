#include "main.h"

/**
 * clear_bit - Set value of a bit to 0 at given index
 * @n: Pointer to num
 * @index: Index starting from 0 of the bit we want to set
 *  Return: 1 on success
 *  -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
