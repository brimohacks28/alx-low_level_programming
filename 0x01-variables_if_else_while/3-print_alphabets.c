#include <stdio.h>
/**
 *main - main block
 *Description:  prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 lc represents lower case
 uc represents upper case
 *Return: 0
 * 
 */
int main(void){
	char lc = 'a';
	char uc ='A';
	while (lc<='z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <='Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return 0;
}
