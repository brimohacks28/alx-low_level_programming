#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i = -1, j;

	for (j = 0; dest[j] != '\0'; j++)
	;

	do {
		i++;
		dest[j] = src[i];
		j++;
	} while (src[i] != '\0');

	return (dest);
}
