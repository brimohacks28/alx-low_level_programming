#include <stdio.h>
#include <stdio.h>
/**
 * Main - Execution of the Code begins here.
 * Description:Print the letters of the Alphabet from A to Z
 * Return 0;
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
