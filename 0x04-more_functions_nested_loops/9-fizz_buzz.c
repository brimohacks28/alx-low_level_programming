#include <stdio.h>
/**
 * main - Code Exection starts
 *
 * Return: is 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			if (j % 3 == 0)
			{
				printf("Fizz");
			}
			if (j % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", j);
		}
		if (j != 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}

