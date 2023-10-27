#include <stdio.h>

/**
 * main - Execution of code begins
 * @argc: offset count
 * @argv: offset value
 * Return: 0 is sucess
 *
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
