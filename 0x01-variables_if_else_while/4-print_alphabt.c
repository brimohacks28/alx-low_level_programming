#include <stdio.h>
/**
 * 
 * main -main block 
 * Description :Printing the alphabet in lowercase
 * Return :0
 *
 * i is a character to represent input
 */
int main(void)
{
	char i ='a';
	while (i <= 'z')
	{
		if (i !='e' && i != 'q')
		{
			putchar(i);
		}
		i++;
		putchar('\n');
		return (0);
	}

