#include "main.h"

/**
 * _calloc - allocate array memory
 * @size bytes each and returns a pointer to memory allocated
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer is sucess
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		i[j] = 0;
	return (i);
}
