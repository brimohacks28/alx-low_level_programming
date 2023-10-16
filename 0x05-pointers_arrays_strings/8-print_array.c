#include "main.h"
#include <stdio.h>
/**
 * print_array - print 'n' elements of integer array
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers separated by comma and space.
 * Numbers should be displayed in the same order they arte stored in array.
 * Only use _putchar to print.
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (n--; n >= 0; n--, b++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
