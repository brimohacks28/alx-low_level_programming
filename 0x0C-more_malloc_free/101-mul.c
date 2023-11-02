#include "main.h"

/**
 * _print - moves a string one place left prints string
 * @str: string to move
 * @l: size of string
 *
 * Return: void is sucess
 */

void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and stores answer in dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination for multiplication
 * @dest_index: highest index in addition
 * Return: pointer to dest, or Null if fail
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int c, d, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (c = num_index, d = dest_index; c >= 0; c--, d--)
	{
		mul = (n - '0') * (num[c] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[d] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	for (addrem += mulrem; d >= 0 && addrem; d--)
	{
		add = (dest[d] - '0') + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to see if they are digits
 * @av: ointer to arguments
 *
 * Return: 0 if digits and 1 otherwise
 */

int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - string initializer
 * @str: string to initialize
 * @l: length of string
 *
 * Return: void is sucess
 */

void init(char *str, int l)
{
	int a;

	for (a = 0; a < l; a++)
		str[a] = '0';
	str[a] = '\0';
}

/**
 * main - multiply 2 numbers
 * @argc: number of Arguments
 * @argv: argument vector
 *
 * Return: 0 is sucess
 */

int main(int argc, char *argv[])
{
	int 11, 12, ln, ti, a;
	char *j;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	j = malloc(ln * sizeof(char));
	if (j == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(j, ln - 1);
	for (ti = l2 - 1, a = 0; ti >= 0; ti--, a++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, j, (ln - 2) - a);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(j);
			exit(98);
		}
	}
	_print(j, ln - 1);
	return (0);
}



