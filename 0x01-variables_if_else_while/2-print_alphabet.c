#include <stdio.h>
/**
 * main - Execution of the Code begins here.
 * Description:Print the letters of the Alphabet from A to Z
 * Return : always returns 0
 *
 */
int main(void)
{
	char input ='a';
	while (input <='z')
	{
		putchar(input);
		input++;
	}
	putchar('\n');
	return (0);
}
