#include "main.h"
/**
 * *_strncat - joins two n bytes of 2 strings
 * @dest: pointer destination
 * @src: Source Pointer
 * @n : number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, k;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (k = 0; k < n && src[k] != '\0'; i++)
		dest[dest_len + k] = src[k];
	dest[dest_len + k] = '\0';

	return (dest);
}
