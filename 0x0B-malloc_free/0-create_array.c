#include "main.h"
/**
 * create_array - prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer is Sucess
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size) /*conditional*/
		{
			*(buffer + position) = c;
			pos++;
		}
		return (buffer);
	}
}
