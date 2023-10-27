#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplication of 2 numbers.
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		val *= atoi(argv[j]);
	}
	printf("%d\n", val);
	return (0);
}
