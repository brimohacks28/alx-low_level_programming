#include "function_pointers.h"
/**
 * main - code execution begins
 * @argc: integer
 * @argv: character Value
 *
 * Return: 0(sucess)
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(!);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < atoi(argv[j]) - 1; j++)
		printf("%02hhx ", ((char *)main)[j]);
	printf("%02hhx\n", ((char *)main)[j]);
	return (0);
}

