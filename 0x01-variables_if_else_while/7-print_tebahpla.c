	#include <stdio.h>
	/**
	 * main -main block where code begins
	 * Description: Printing alphabets ascending
	 * Return: 0
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
