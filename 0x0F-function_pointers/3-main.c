#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Function begins
 * @argc: number of lines arguments
 * @argv: array of  elemt
 * Return: 0 is sucess
 */

int main(int argc, char *argv[])
{
	int k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", k);

	return (0);
}
