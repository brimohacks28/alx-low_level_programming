#include "main.h"
#include <stdio.h>
/**
 * is_prime_number  - checks if n is prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (chack_prime(n, 2));
}
/**
 * check_prime - check all numbers less than n if divisible
 * @n: integer
 * @in: int
 * Return: int
 */

int check_prime(int n, int in)
{
	if (in >= n && n > 1)
		return (1);
	else if (n % in == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, in + 1));
}
