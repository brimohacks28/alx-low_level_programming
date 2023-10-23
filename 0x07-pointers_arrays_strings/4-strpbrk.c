#include "main.h"
#include <stdio.h>
/**
 * _strbrk - byte receive
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
