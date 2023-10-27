#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random numbers
 * passwords to be generated
 * Return: always 0 to be sucessful
 */
int main(void)
{
	int j, sum, nu;
	int pass[100];

	sum = 0;

	srand(time(NULL));
	for (j = 0; j < 100; j++)
	{
		pass[j] = rand() % 78;
		sum += (pass[j] + '0');
		putchar(pass[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			nu = 2772 - sum - '0';
			sum += nu;
			putchar(nu + '0');
			break;
		}
	}
	return (0);
}
