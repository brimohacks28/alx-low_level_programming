#include "main.h"

/**
 * get_endianness - Check the endianness
 *
 * Return: 0 if big endian
 *  1 if little endian sucess
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
