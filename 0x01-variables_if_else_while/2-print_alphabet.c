#include <stdio.h>
/**
 * main - Execution of the Code begins here.
 * Description:Print the letters of the Alphabet from A to Z
 * return 0;
 * return 0 is sucess.
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
