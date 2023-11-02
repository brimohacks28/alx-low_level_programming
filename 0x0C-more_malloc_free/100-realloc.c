#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer represent
 * @old_size: old size
 * @new_size: new size
 * Return: pointer or NULL Sucess
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int j, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (j = 0; j < n; j++)
		p[j] = oldp[j];
	free(ptr);
	return (p);
}
