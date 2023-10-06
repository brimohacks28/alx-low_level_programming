#include <stdio.h>
/**
 * main - Where the Execution of the Code Begins 
 * Desc :   a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * j is used as the variable .
 */
int main(void)
{
	int j =0;
	while (j<10)
	{
		putchar(48 + j);
		j++;
	}
	putchar('\n');
	return (0);
}
