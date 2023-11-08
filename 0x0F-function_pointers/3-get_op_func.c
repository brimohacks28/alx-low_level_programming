#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - get an operation
 * @s: operator
 * Return: No
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div}
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op)
	{
		if (strcmp(s, ops[j].op) == 0)
		{
			return (ops[j].f);
		}
		j++;
	}
	printf("Error\n");
	exit(99);
}
