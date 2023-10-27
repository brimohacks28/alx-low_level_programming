#include "main.h"
/**
 * main - Code Execution Begins
 * Return: 0 shows sucess.
 *
 */
int main(void)
{
	char t[9] = "_putchar";
	int j = 0;

	while (j < 8)
	{
		_putchar(t[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}
