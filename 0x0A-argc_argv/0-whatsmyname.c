#include <stdio.h>

/**
 * main - function starts
 * @argc: offset count
 * @argv: offset value
 * Return: 0 is sucess
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("Invalid\n");
	}
	printf("%s\n", argv[0]);
	return (0);
}
