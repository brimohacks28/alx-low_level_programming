#include "main.h"

/**
 * _strlen - Gets the length of a string
 *  @s: String that is  being evaluated
 *
 *  Return: Length of string Sucess
 *
 */

int _strlen(char *s)
{
	int j =  0;

	while (*(s + j))
		++j;
	return (j);
}

/**
 * create_file - Creates a file
 *  @filename: Name of file to create
 *  @text_content: NULL terminated string to write
 *
 *  Return: 1 on success
 *  -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
