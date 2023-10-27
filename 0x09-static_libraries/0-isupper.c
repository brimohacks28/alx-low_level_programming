#include "main.h"
/**
 * _isupper -checks whether character is uppercase
 * @c : representation of variable to be used in the function.
 * Return: 1 if uppercase and  0 will be printed.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
