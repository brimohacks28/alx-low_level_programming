	#include <stdio.h>
	/**
	 * main - Entry point of the program.
	 *
	 * Description - Program to print alphabetic numbers
	 *
	 * Return 0;
	 * Return value is always 0 (sucess).
	 */
	int main(void)
	{
		char ch;

		for (ch = 'z'; ch >= 'a' ; ch--)
			putchar(ch);
		putchar('\n');

		return (0);
	}
