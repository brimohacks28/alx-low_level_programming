#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @c: sumnd 1
 * @d: sumnd 2
 * Return: result
 */

int op_add(int c, int d);
{
	return (c + d);
}
/**
 * op_sub - subtraction
 * @c: minuend
 * @d: sustrnd
 * Return: result
 */

int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - multiply
 * @c: mult 1
 * @d: multp 2
 * Return: result
 */

int op_mul(int c, int d)
{
	return (c * d);
}
/**
 * op_div - division
 * @c: divisor
 * @d: dividor
 * Return: Result
 */

int op_div(int c, int d)
{
	if (d)
	{
		return (c / d);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @c: vaper 1
 * @d: vaper 2
 * Return: result
 */

int op_mod(int c, int d)
{
	if (d)
	{
		return (c % d);
	}
	printf("Error\n");
	exit(100);
}
