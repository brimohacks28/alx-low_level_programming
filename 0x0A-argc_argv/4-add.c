#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0 is sucess
 */

int main(int argc, char *argv[])
{
	unsigned int a, add, number;

	add = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (a = 0; argv[argc][a] != '\0'; a++)
		{
			if (!(isdigit(argv[argc][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[argc]);
		add += number;
	}
	printf("%d\n", add);
	return (add);
}
