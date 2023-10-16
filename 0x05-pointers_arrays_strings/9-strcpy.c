#include "main.h"
/**
 * _strcpy - copies the string pointed by src
 * @dest: char type of string
 * @src: char type of string
 * Description: Copy the String pointed to by pointer src
 * Return: Pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
