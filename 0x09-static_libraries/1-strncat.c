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
	int b, i;

	b = 0;

	/*size finding of dest array*/
	while (dest[b])
		b++;

	/**
	 * src doesnt need to be terminated null
	 * if it has n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[b + i] = src[i];
	/*null terminate dest*/
	dest[b + i] = '\0';

	return (dest);
}
