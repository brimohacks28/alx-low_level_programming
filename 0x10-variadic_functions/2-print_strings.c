#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separates strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unisgned int n, ...)
{
	va_list list;
	unsigned int l;
	char *c;

	va_start(list, n);

	for (l = 0; l < n; l++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (l != n - 1 && separator != NULL)
			printf("(nil)");

		if (l != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
