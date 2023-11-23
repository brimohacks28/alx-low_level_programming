#include  "main.h"
/**
 * _strlen_b - return string lenght
 * @s: Pointer to astring
 *
 * Return: Length of a string
 * 0 if any character is neither 0 or 1
 */

unsigned int _strlen_b(const char *s)
{
	int k = 0;

	while (*(s + k))
	{
		if (*(s + k) != '0' && *(s + k) != '1')
			return (0);
		++k;
	}
	return (k);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *  @b: Pointer to a string of 0 and 1 chars
 *   *
 *  Return: Converted number
 *  0 if there is one or more chars in the string that is not 0 or 1
 *   0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow;
	unsigned int n = 0;
	unsigned int l = 0;

	if (b)
		l = _strlen_b(b);
	for (pow = 0; l; --l, ++pow)
	{
		if (*(b + l - 1) == '1')
			n += 1 << pow;
	}
	return (n);
}
