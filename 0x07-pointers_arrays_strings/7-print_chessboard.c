#include "main.h"
/**
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int o, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(*((o + a) + b));
