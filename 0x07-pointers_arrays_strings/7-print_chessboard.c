#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: the board to print
 *
 * Return: 0 (success).
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; y < 8; j++)
			_putchar(a[x][y]);

		_putchar('\n');
	}
}
