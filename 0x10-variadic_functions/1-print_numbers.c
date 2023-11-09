#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with seperator
 * @separator: separate numbers
 * @n: int, number of arguments undefined
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int l;

	va_start(list, n);

	for (l = 0; l < n; l++)
	{
		printf("%l", va_arg(list, int));
		if (l != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
