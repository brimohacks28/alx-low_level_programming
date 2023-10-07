	#include <stdio.h>
	/**
	 * main -Code Execution Begins
	 * Description - Program to print alphabetic numbers
	 *
	 */
	int main(void)
	{
		char ch;

		for (ch = 'z'; ch >= 'a' ; ch--)
			putchar(ch);
		putchar('\n');
		return (0);
	}
