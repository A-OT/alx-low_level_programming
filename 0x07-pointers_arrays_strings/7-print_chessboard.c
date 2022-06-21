#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: the board to print
 *
 * Return: 0 (success).
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = y = 0;

	while (x < 8)

	{
		y = 0;

		while (y < 8)

		{
			_putchar(a[x][y]);

			y++;
		}

		_putchar("\n");

		x++;
	}
}
