#include <stdio.h>
#include <stdlib.h>

/**
 * realloc- prototype
 * new_size- new
 * old_size - old
 * ptr- pointer
 * main- code Execution begins
 *
 * Return: new-ptr sucess
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}

	void *new_ptr == malloc (new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	free (ptr);

	return (new_ptr);
}
/**
 * main- function Execution Begins
 * old_size- old
 * new-size- new
 * realloc- reallocated
 * Return: void sucess
 */

int main(void)
{
	int *arr = (int *)malloc (3 * sizeof(int));

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	unsigned int old_size = 3;
	unsigned int new_size = 5;

	int *new_arr = (int *)_realloc(arr, old_size * sizeof(int), new_size * sizeof(int));

	if (new_arr != NULL)
	{
		free(new_arr);
	}
	return (0);
}
