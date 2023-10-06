#include <stdio.h>
#include <stdlib.h>
/**
 * main - The Code Execution Begins Here
 * Description :Program that prints all possible combinations of single-digit numbers.
 * 0 is where the counting begins all the way to 9 . since it is an array of 10.
 * Return 0;
 */
int main(void)
{
	int a=0;
	while (a <10)
	{
		putchar(48 + a);
		if ( a !=9) 
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
			
