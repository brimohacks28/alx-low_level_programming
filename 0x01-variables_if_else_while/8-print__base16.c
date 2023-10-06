#include <stdio.h>
#include <stdlib.h>
/**
 * main - Where the Code Execution begins
 * Description :a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Starting From 0  and ends with a new line
 * Return: Always 0 shows a sucess.
 */
int main(void)
{
	char c;
	for ( c='0';c <='9'; c ++)
	{
		putchar(c);
	}
	for (c ='a';c<='f';c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
