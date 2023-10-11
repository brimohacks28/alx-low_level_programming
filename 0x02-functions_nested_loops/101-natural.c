#include <stdio.h>
#include<stdlib.h>
/**
 * main -main block
 *
 * Description: Multiples or 3 printed or
 *  5 below 1024 followed by a new line
 *  Return: 0;
 */
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
