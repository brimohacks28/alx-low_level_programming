#include "main.h"
/**
 * _isalpha -check for lower case letter
 * @c: checking character
 * Return: 0 or 1 is sucess.
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
