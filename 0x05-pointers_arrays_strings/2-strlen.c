#include "main.h"
/**
 * _strlen - find the string length
 * @s: pointer to the string to check
 * Return: void
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}
