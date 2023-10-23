#include "main.h"
/**
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int o, b;

	for (o = 0; o < 8; o++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[o][b]);
		}
	_putchar('\n');
	}
}
