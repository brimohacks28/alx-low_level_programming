#include <stdio.h>
/**
 * main - code Execution starts
 *
 * Return: 0 is sucess.
 */
int main(void)
{
	long int u = 612852475143;
	long int  xl;

	for (xl = 2; xl < u; xl++)
	{
		if (u % xl == 0)
		{
			u = u / xl;
		}
	}
	printf("%ld\n", xl);
	return (0);
}
