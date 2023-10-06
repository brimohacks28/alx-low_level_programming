#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -main block where the code execution begins
 * Description: A C Program that prints all the single digit numbers of base 10
 * Printing Numbers starts from 0 followed by a new line usually Denoted by \n 
 * Return:0
 * j is the variable assigned
 */
int main(void)
{
	char j ='0';
	while (j <='9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return(0);
}


