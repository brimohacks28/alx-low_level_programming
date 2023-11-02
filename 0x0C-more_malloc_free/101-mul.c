#include "main.h"
#include <stdlib.h>
/**
 * _atoi_digit - converts a character into a integer
 * @x: character that converts
 * Return: int is a sucess
 */

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}
/**
 * _isNumber - Defines whether string is a number
 * @argv: pointer to a string.
 * Return: 0 is suceess
 */

int _isNumber(char *argv)
{
	int a;

	for (a = 0; argv[a]; a++)
		if (argv[a] < 48 || argv[a] > 57)
			return (a);
	return (0);
}
/**
 * _calloc - allocate array of size *nmemb.
 * @nmemb: number of elements.
 * @size: size of the element
 * Return: pointer to array is sucess
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int a;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (a = 0; a < (size * nmemb); a++)
		tab[a] = '0';

	return (tab);
}
/**
 * mul_array -multiply 2 arrays
 * @a1: first array.
 * @len1: length of array a1.
 * @a2: char.
 * @a3: array for the result.
 * @lena: length of array 3
 * Return: pointer to array is sucess
 */

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, a, j;

	j = lena;
	for (a = len1 - 1; a >= 0; a--)
	{
		mul += (a1[a] - '0') * (a2 - '0') + (a3[j] - '0');
		a3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;
	}
	return (a3);
}
/**
 * print_array - print all array digits
 * @nb: number of elements to print
 * @a: array of elements.
 */

void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
/**
 * main - prints * of 2 numbers
 * @argc: array length.
 * @argv: array
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
		tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 -));
		c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCESS);
	return (0);
}
